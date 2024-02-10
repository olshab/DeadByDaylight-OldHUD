#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "StatProperty.h"
#include "EInputInteractionType.h"
#include "TagStateBool.h"
#include "Templates/SubclassOf.h"
#include "CamperDistractionData.h"
#include "K34TipToeModeComponent.generated.h"

class UTimerObject;
class ASlasherPlayer;
class AK34TipToeDistraction;
class UStatusEffect;
class ULocalActorPoolComponent;
class UNavigationQueryFilter;
class ACamperPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK34TipToeModeComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(ReplicatedUsing=OnRep_IsInTipToeMode)
	FTagStateBool _isInTipToeMode;

	UPROPERTY(ReplicatedUsing=OnRep_IsInTipToeModeCooldown)
	FTagStateBool _isInTipToeModeCooldown;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _tipToeModeStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _tipToeModeCooldown;

	UPROPERTY(Replicated, Transient, Export)
	UTimerObject* _tipToeModeCooldownTimer;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _tipToeModeDuration;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _tipToeModeDurationPenaltyPercentagePerM1Attempt;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _tipToeModeDurationWarningTimeUpAdvanceNotice;

	UPROPERTY(Replicated, Transient, Export)
	UTimerObject* _tipToeModeDurationTimer;

	UPROPERTY(ReplicatedUsing=OnRep_TipToeModeDurationWarningTimeUpTimer, Transient, Export)
	UTimerObject* _tipToeModeDurationWarningTimeUpTimer;

	UPROPERTY(Transient, Export)
	ULocalActorPoolComponent* _authority_distractionPoolComponent;

	UPROPERTY(EditDefaultsOnly)
	EInputInteractionType _inputToDisplayWhileInTipToeMode;

	UPROPERTY(EditDefaultsOnly)
	EInputInteractionType _inputToDisplayWhileInNormalMode;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _enterTipToeBufferToExit;

	UPROPERTY(EditDefaultsOnly)
	int8 _distractionPoolSize;

	UPROPERTY(EditDefaultsOnly)
	int8 _maxTryPerTickToFindSpawn;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _maxDistractionPerSurvivor;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _distractionRandomSpawnRateMin;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _distractionRandomSpawnRateMax;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _distractionLifetime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _spawnRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _spawnRadiusBuffer;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _directionRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxVerticalDistance;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldMinimizeSpawnDistanceWhenInChase;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK34TipToeDistraction> _tipToeDistractionClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UNavigationQueryFilter> _navQueryFilter;

	UPROPERTY(Transient)
	TMap<ACamperPlayer*, FCamperDistractionData> _authority_survivorsData;

private:
	UFUNCTION()
	void OnRep_TipToeModeDurationWarningTimeUpTimer();

protected:
	UFUNCTION()
	void OnRep_IsInTipToeModeCooldown() const;

	UFUNCTION()
	void OnRep_IsInTipToeMode();

public:
	UFUNCTION(BlueprintCallable)
	bool IsInTipToeMode();

	UFUNCTION(BlueprintCallable)
	float GetTipToeModeDuration();

	UFUNCTION(BlueprintPure)
	float GetTipToeModeCooldownDuration() const;

	UFUNCTION(BlueprintPure)
	float GetRemainingTipToeModeDuration() const;

	UFUNCTION(BlueprintPure)
	float GetRemainingTipToeModeCooldownDuration() const;

protected:
	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetKiller() const;

public:
	UFUNCTION(BlueprintPure)
	bool CanEnterTipToeMode() const;

	UFUNCTION(BlueprintCallable)
	void Authority_SetIsInTipToeMode(const bool isInTipToeMode, const bool triggerExitEvent);

	UFUNCTION(BlueprintCallable)
	void Authority_ReduceDuration(const float reductionPercentage);

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void Authority_ReduceCooldown(const float reductionPercentage) const;

	UFUNCTION()
	void Authority_OnIntroCompleted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK34TipToeModeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34TipToeModeComponent) { return 0; }
