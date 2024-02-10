#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "FloatingVoidEnergyOrb.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UFloatingVoidEnergyOrb : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerInteract, ADBDPlayer*, player);

protected:
	UPROPERTY(BlueprintAssignable)
	FOnPlayerInteract Cosmetic_OnOrbStartMoving;

	UPROPERTY(BlueprintAssignable)
	FOnPlayerInteract Cosmetic_OnOrbReachPlayer;

private:
	UPROPERTY(EditDefaultsOnly)
	FName _characterBoneName;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _travelTimeToPlayer;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _voidEnergyToGrantPlayer;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _trackerRadius;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StartTravelToPlayer(ADBDPlayer* playerToTravelTo);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnReachedPlayer();

	UFUNCTION()
	void Authority_OnTravelTimeEnd();

	UFUNCTION()
	void Authority_OnRespawn();

	UFUNCTION()
	void Authority_OnPlayerExitZone(ADBDPlayer* player);

	UFUNCTION()
	void Authority_OnPlayerEnterZone(ADBDPlayer* playerToTravelTo);

	UFUNCTION()
	void Authority_OnDespawn();

public:
	UFloatingVoidEnergyOrb();
};

FORCEINLINE uint32 GetTypeHash(const UFloatingVoidEnergyOrb) { return 0; }
