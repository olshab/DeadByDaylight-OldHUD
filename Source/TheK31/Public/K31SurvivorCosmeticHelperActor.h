#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "DBDTunableRowHandle.h"
#include "K31SurvivorCosmeticHelperActor.generated.h"

class AK31Drone;
class UK31PlayerZoneStatus;

UCLASS()
class THEK31_API AK31SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UK31PlayerZoneStatus* _playerZoneStatus;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _enterActiveZoneCosmeticCooldown;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateLockOnProgress(float currentProgressPercent, bool isFullyLockedOn);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsTrappedByClawTrap(bool isTrapped);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsSurvivorImmuneToDetection(bool isImmuneToDetection, int32 numLockOns);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsSurvivorDetectedAndVisibleOnScanner(bool isSurvivorDetectedAndVisibleOnScanner);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsOverlappingActiveZoneChanged(bool isOverlappingActiveZone);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsBroadcasting(bool isBroadcasting);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDetectedByDrone(AK31Drone* drone, bool isOnCooldown);

public:
	AK31SurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AK31SurvivorCosmeticHelperActor) { return 0; }
