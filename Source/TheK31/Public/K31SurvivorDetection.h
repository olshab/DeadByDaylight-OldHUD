#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatProperty.h"
#include "ECamperDamageState.h"
#include "SurvivorStatusInterface.h"
#include "Templates/SubclassOf.h"
#include "K31SurvivorDetection.generated.h"

class UTimerObject;
class UStatusEffect;
class UChargeableComponent;
class AK31Power;
class AActor;
class AK31Drone;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31SurvivorDetection : public UActorComponent, public ISurvivorStatusInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hinderedStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _brokenStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _killerInstinctStatusEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _brokenStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _secondsToCharge;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _chargeRate;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _chargeModifierWhenClawTrapped;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _lockOnChargeStackPercent;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _hinderedEffectPercent;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _hinderedEffectDuration;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _killerInstinctEffectDuration;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _enableKillerInstinctRangeCheck;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _killerInstinctEffectKillerRange;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _immuneToDroneDetectionDuration;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _survivorIsBelowDroneDuration;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _showSurvivorOnRadarDuration;

	UPROPERTY(ReplicatedUsing=OnRep_OriginatingPower)
	AK31Power* _originatingPower;

	UPROPERTY(ReplicatedUsing=OnRep_ChargeableComponent, Export)
	UChargeableComponent* _chargingLockedOnChargeableComponent;

	UPROPERTY(Transient, Export)
	UTimerObject* _immuneToDetectionTimer;

	UPROPERTY(Transient, Export)
	UTimerObject* _survivorIsBelowDroneTimer;

	UPROPERTY(Transient, Export)
	UTimerObject* _showSurvivorOnRadarTimer;

	UPROPERTY(ReplicatedUsing=OnRep_IsFullyLockedOn)
	bool _isFullyLockedOn;

	UPROPERTY(Transient)
	TArray<AK31Drone*> _overlappingDrones;

	UPROPERTY(Transient)
	TArray<AK31Drone*> _overlappingActiveDrones;

	UPROPERTY(Transient)
	float _lastActiveTime;

private:
	UFUNCTION()
	void OnRep_OriginatingPower(AK31Power* oldPower);

	UFUNCTION()
	void OnRep_IsFullyLockedOn();

	UFUNCTION()
	void OnRep_ChargeableComponent();

	UFUNCTION()
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

	UFUNCTION()
	void Authority_OnChargeCompleted(bool completed, const TArray<AActor*>& instigatorsForCompletion);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31SurvivorDetection();
};

FORCEINLINE uint32 GetTypeHash(const UK31SurvivorDetection) { return 0; }
