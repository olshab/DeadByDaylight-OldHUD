#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "TagStateBool.h"
#include "OnHeatChargeUpdateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HillbillyChainsawOverheatComponent.generated.h"

class UStatusEffect;
class UTimerObject;
class UPowerChargeComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UHillbillyChainsawOverheatComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintAssignable)
	FOnHeatChargeUpdateDelegate OnHeatChargeUpdateDelegate;

private:
	UPROPERTY(Replicated, Transient, Export)
	UTimerObject* _overheatTimer;

	UPROPERTY(ReplicatedUsing=OnRep_IsChainsawOverheating, Transient)
	FTagStateBool _isChainsawOverheating;

	UPROPERTY(Transient, Export)
	UPowerChargeComponent* _chainsawHeatCharge;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _overheatStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _heatDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _heatMaxCharge;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _heatRevStartAmount;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _heatRevInputPressActivationBuffer;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _heatSurvivorHitAmount;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _heatRevChargeRate;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _heatDashChargeRate;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _heatDischargeRate;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _heatDecayDelay;

private:
	UFUNCTION()
	void OnRep_IsChainsawOverheating() const;

	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintPure)
	bool IsChainsawOverheating() const;

private:
	UFUNCTION()
	void Authority_OnHeatChargeFull() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHillbillyChainsawOverheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawOverheatComponent) { return 0; }
