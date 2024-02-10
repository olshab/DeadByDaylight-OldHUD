#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HauntComponent.h"
#include "DBDTunableRowHandle.h"
#include "StandardWorldHauntComponent.generated.h"

class ADBDPlayer;
class UStatusEffect;
class URespawnableComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class HALLOWEEN2023_API UStandardWorldHauntComponent : public UHauntComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintAssignable)
	FOnPlayerInteract Cosmetic_OnPlayerTriggerBoon;

	UPROPERTY(BlueprintAssignable)
	FOnPlayerInteract Cosmetic_OnPlayerTriggerTrap;

	UPROPERTY(BlueprintAssignable)
	FOnHauntEvent Cosmetic_OnAutomaticShutDownReached;

	UPROPERTY(BlueprintAssignable)
	FOnPlayerInteract ForceMovePlayerTowardsHaunt;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeAfterVoidZoneCloseBeforeAutomaticShutdown;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hasteStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _hasteDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _hasteValue;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hinderedEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _hindredDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _hindredValue;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _killerStunDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _playerTrackerRadius;

	UPROPERTY(Transient, Export)
	URespawnableComponent* _respawnableComponent;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnAutomaticShutDownReached();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_BlessOrTrapCharacterEnteringZone(ADBDPlayer* player, bool isBlessing);

	UFUNCTION()
	void Authority_OnVoidZoneOpened();

	UFUNCTION()
	void Authority_OnVoidZoneClosed();

	UFUNCTION()
	void Authority_OnAutomaticShutDownReached();

public:
	UStandardWorldHauntComponent();
};

FORCEINLINE uint32 GetTypeHash(const UStandardWorldHauntComponent) { return 0; }
