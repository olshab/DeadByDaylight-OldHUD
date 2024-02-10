#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HauntComponent.h"
#include "DBDTunableRowHandle.h"
#include "EPlayerRole.h"
#include "VoidZoneHauntComponent.generated.h"

class ADBDPlayer;
class UStatusEffect;
class AActor;
class UChargeableInteractionDefinition;
class UChargeableComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class HALLOWEEN2023_API UVoidZoneHauntComponent : public UHauntComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnVoidZoneEvent);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerProgress, int32, killerProgress, int32, survivorProgress);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHauntContestChange, bool, isContested);

protected:
	UPROPERTY(BlueprintAssignable)
	FOnHauntContestChange Cosmetic_OnHauntContested;

	UPROPERTY(BlueprintAssignable)
	FOnPlayerRoleEvent Cosmetic_OnHauntWon;

	UPROPERTY(BlueprintAssignable)
	FOnVoidZoneEvent Cosmetic_OnVoidZoneOpen;

	UPROPERTY(BlueprintAssignable)
	FOnVoidZoneEvent Cosmetic_OnVoidZoneClose;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _voidEnergyToCaptureHaunt;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _survivorVoidEnergyPerSecond;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _progressDecayTimer;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _initialWaitTimeToCaptureEnergy;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _progressDecayAmount;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _progressCancelAmount;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _slasherVoidEnergyPerSecond;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _camperRateToTakeVoidEnergy;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _slasherRateToTakeVoidEnergy;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeOrbMoves;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _survivorTrackerRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _slasherTrackerRadius;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hasteStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _camperHasteValue;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _slasherHasteValue;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _enduranceStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _undetectableStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _camperActionSpeedBoostStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _slasherActionSpeedBoostStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _slasherAttackCooldownStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _itemEnergyGainedOnCapture;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _camperBonusDurations;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _camperActionSpeedValue;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _slasherBonusDurations;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _slasherActionSpeedValue;

	UPROPERTY(Replicated)
	EPlayerRole _currentRoleWinningHaunt;

	UPROPERTY(EditDefaultsOnly)
	float _heightOffsetToSpawnOrb;

	UPROPERTY(Transient, Export)
	UChargeableInteractionDefinition* _captureHauntInteraction;

	UPROPERTY(Transient, Export)
	UChargeableComponent* _captureHauntChargeable;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_WinHauntForTeam(ADBDPlayer* winningPlayer, const TArray<TWeakObjectPtr<ADBDPlayer>>& playersInZone);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_UpdateAllPlayerHauntTargets(float chargeRemainingInHaunt, const TArray<TWeakObjectPtr<ADBDPlayer>>& playersInZone, bool isZoneContested, bool shouldRegressProgress);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PlayerEnterOrLeftZone(ADBDPlayer* playerEnteringOrLeavingZone, bool isPlayerLeavingZone, float chargeRemainingInHaunt, const TArray<TWeakObjectPtr<ADBDPlayer>>& playersInZone, bool isZoneContested, bool shouldRegressProgress);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnVoidZoneOpen();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnVoidZoneClose();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_AddCaptureProgress(int32 progress);

	UFUNCTION()
	void Authority_StartRegression();

	UFUNCTION()
	void Authority_ResetAllProgress();

	UFUNCTION()
	void Authority_PlayerInZone(ADBDPlayer* player);

	UFUNCTION()
	void Authority_OnVoidZoneOpen();

	UFUNCTION()
	void Authority_OnVoidZoneClose();

	UFUNCTION()
	void Authority_OnInteractionCompleted(bool completed, const TArray<AActor*>& instigatorsForCompletion);

	UFUNCTION()
	void Authority_GrantCaptureBonusStatusEffects(ADBDPlayer* player);

	UFUNCTION()
	void Authority_DecayProgress(float deltaTime);

	UFUNCTION()
	void Authority_AddCaptureProgress(int32 progress, ADBDPlayer* playerGivingEnergy);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UVoidZoneHauntComponent();
};

FORCEINLINE uint32 GetTypeHash(const UVoidZoneHauntComponent) { return 0; }
