#pragma once

#include "CoreMinimal.h"
#include "HackableDroneState.h"
#include "StatProperty.h"
#include "K31DroneState.h"
#include "K31DroneActiveState.generated.h"

class UTimerObject;
class UChargeableComponent;

UCLASS(BlueprintType)
class THEK31_API UK31DroneActiveState : public UK31DroneState, public IHackableDroneState
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FStatProperty _unhackableDuration;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _revertToScoutingMaxDuration;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _revertToScoutingMinDuration;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _revertToScoutingRechargeRate;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _revertToScoutingDechargeRate;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _revertToScoutingDechargeDelay;

	UPROPERTY(EditDefaultsOnly)
	bool _doNearbyClawTrapsDisableHacking;

	UPROPERTY(Replicated, Export)
	UChargeableComponent* _revertToScoutingCharge;

	UPROPERTY(Replicated, Export)
	UTimerObject* _unhackableTimer;

public:
	UFUNCTION(BlueprintCallable)
	float GetRevertToScoutingMaxCharge();

	UFUNCTION(BlueprintCallable)
	float GetRevertToScoutingCurrentCharge();

private:
	UFUNCTION()
	void Authority_OnChargeDepleted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31DroneActiveState();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneActiveState) { return 0; }
