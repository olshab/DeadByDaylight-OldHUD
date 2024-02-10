#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K32KillerPodVisionLockOnComponent.generated.h"

class ACamperPlayer;
class AK32Power;
class AK32KillerPod;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32KillerPodVisionLockOnComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _lineOfSightTraceSphereSize;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _lockOnScreenCoveragePercentageY;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _autoDetectSurvivorRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _lockOnRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _lingerTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _teleportLockOnTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _assimilationLockOnTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _cooldownTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _antiCampLockOnRateMultiplier;

	UPROPERTY(EditDefaultsOnly)
	FName _survivorProjectileTargetSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _traceProfile;

	UPROPERTY(EditDefaultsOnly)
	float _feetOffsetMultiplier;

private:
	UPROPERTY()
	AK32Power* _power;

private:
	UFUNCTION(Server, Reliable)
	void Server_SetSurvivorBeingLockedOn(ACamperPlayer* targetSurvivor);

	UFUNCTION(Server, Reliable)
	void Server_LaunchAssimilationProjectile(ACamperPlayer* targetSurvivor, AK32KillerPod* currentPod);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ShootPodProjectileAtSurvivor(const AK32KillerPod* originKillerPod, ACamperPlayer* targetSurvivor);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ShootPodProjectileAtSurvivor(const AK32KillerPod* currentPod, ACamperPlayer* targetSurvivor);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Local_OnCooldownStarted();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Local_OnCooldownEnded();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Local_IsChargingChanged(const bool isCharging);

public:
	UK32KillerPodVisionLockOnComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32KillerPodVisionLockOnComponent) { return 0; }
