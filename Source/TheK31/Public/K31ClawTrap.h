#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K31ClawTrap.generated.h"

class AK31Drone;

UCLASS()
class THEK31_API AK31ClawTrap : public AActor
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void OnAnimNotifyManuallyRemoveTrap();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Spark();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTrapRemoved(bool wasRemovedAutomatically);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTrapAdded();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsBroadcastingChanged(bool isBroadcasting);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnBatteryChargeUpdated(float newCharge);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAddedByDrone(AK31Drone* originatingDrone, float clawTrapCosmeticDelayDuration);

public:
	AK31ClawTrap();
};

FORCEINLINE uint32 GetTypeHash(const AK31ClawTrap) { return 0; }
