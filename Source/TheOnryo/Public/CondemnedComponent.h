#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "CondemnedUIDataInterface.h"
#include "Templates/SubclassOf.h"
#include "ECondemnOrigin.h"
#include "CondemnedComponent.generated.h"

class UStatusEffect;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEONRYO_API UCondemnedComponent : public UActorComponent, public ICondemnedUIDataInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _condemnedRangeWhenTeleport;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxCondemnedLevel;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _killerInstinctRevealDurationOnFullyCondemned;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _stacksOnTurnOffTV;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _stacksOnRetrieveVHS;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _stacksRemovedOnInsert;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _stacksOnOnryoTeleport;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _reducedAddonStacksOnOnryoTeleport;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _stacksOnPlayerHooked;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxLockInStacksPerHook;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _condemnedStackPerSecond;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _analyticScoreTag;

	UPROPERTY(ReplicatedUsing=OnRep_CondemnedLevel)
	float _condemnedLevel;

	UPROPERTY(Replicated)
	float _lockedCondemnedLevel;

	UPROPERTY(Replicated)
	ECondemnOrigin _previousReasonForCondemn;

	UPROPERTY(ReplicatedUsing=OnRep_HoldingVHS)
	bool _isHoldingVHS;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _condemnKillerInstinctEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _condemnKillerInstinctEffect;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _reactivateCondemnProgressEvents;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _rangeToStopCondemnProgressAfterChase;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeAwayFromKillerToResumeCondemn;

private:
	UFUNCTION()
	void OnRep_HoldingVHS();

	UFUNCTION()
	void OnRep_CondemnedLevel(const float previousValue);

	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintPure)
	bool IsHoldingVHS() const;

	UFUNCTION(BlueprintPure)
	bool IsFullyCondemned() const;

	UFUNCTION(BlueprintPure)
	bool IsCondemned() const;

	UFUNCTION(BlueprintPure)
	float GetLockedCondemnedPercent() const;

	UFUNCTION(BlueprintPure)
	float GetCondemnedPercent() const;

	UFUNCTION(BlueprintPure)
	float GetCondemnedLevel() const;

	UFUNCTION(Exec)
	void DBD_SetCondemnMoriableAndDownAllSurvivors();

	UFUNCTION(Exec)
	void DBD_SetCondemnedLevel(const float level);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCondemnedComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCondemnedComponent) { return 0; }
