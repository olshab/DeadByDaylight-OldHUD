#pragma once

#include "CoreMinimal.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "K32KillerToSurvivorTeleportInteractionDefinition.generated.h"

class ACamperPlayer;
class ADBDPlayer;
class ASlasherPlayer;
class UStatusEffect;
class APallet;
class AK32KillerPod;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32KillerToSurvivorTeleportInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _teleportDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _wakeUpTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _killerCollisionIgnoredLingerTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _teleportDurationExtensionThirdPersonAntiCamp;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _overclockDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _overheatDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _overlockStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _overheatStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	float _killerSize;

	UPROPERTY(EditDefaultsOnly)
	float _secondsOfOverclockPerAssimilatedSurvivor;

private:
	UFUNCTION(Server, Reliable)
	void Server_SetTeleportTarget(ACamperPlayer* survivor, AK32KillerPod* initiatedPod);

	UFUNCTION()
	void OnTeleportationComplete(ADBDPlayer* player);

	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void OnKillerCollisionIngoreLingerComplete(ADBDPlayer* player);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetTeleportTarget(ACamperPlayer* survivor, const FVector& teleportEndLocation, const FVector& teleportStartLocation, AK32KillerPod* initiatedPod);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnTeleportStarted(ADBDPlayer* player, const FVector& teleportStartLocation, const FVector& teleportEndLocation);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnTeleportEnded(ADBDPlayer* player);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DestroyPallet(APallet* pallet);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportStart(const FVector& teleportEndLocation, const FVector& teleportStartLocation);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportEnd();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_EnableTeleportVignette(ASlasherPlayer* killer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DisableTeleportVignette(ASlasherPlayer* killer);

public:
	UK32KillerToSurvivorTeleportInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK32KillerToSurvivorTeleportInteractionDefinition) { return 0; }
