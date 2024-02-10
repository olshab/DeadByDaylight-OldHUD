#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "EVoidEnergyChangeReason.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "Halloween2023EventComponent.generated.h"

class UStatusEffect;
class ADBDPlayer;
class AUnstableRift;
class ULocalPlayerTrackerComponent;
class UInteractionDefinition;
class UDebugTimerLogComponent;
class AActor;
class UVoidZonePlayerComponent;
class ULinkedTeleporterComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2023_API UHalloween2023EventComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _durationToKeepVoidZoneOpenForMori;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> _voidWorldTeleporterBP;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> _voidWorldHauntBP;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInteractionDefinition> _stunInteractionClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UVoidZonePlayerComponent> _voidZonePlayerComponentClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeRiftsAreOpen;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _defaultTimeBeforeRiftsOpen;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _warningTimeBeforeRiftsClose;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _voidEnergyNeededToTriggerRift;

	UPROPERTY(Transient)
	TArray<AUnstableRift*> _unstableRifts;

	UPROPERTY(ReplicatedUsing=OnRep_PlayersInVoid)
	TArray<ADBDPlayer*> _playersInVoid;

	UPROPERTY()
	TArray<ADBDPlayer*> _previousPlayersInVoidZone;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _voidWorldHauntInteractionClass;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UStatusEffect>> _statusEffectClassesToApplyToKillersOnEnterVoid;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UStatusEffect>> _statusEffectClassesToApplyToSurvivorsOnEnterVoid;

	UPROPERTY(EditDefaultsOnly)
	FVector _voidZoneLightingLocation;

	UPROPERTY(Transient, Export)
	ULocalPlayerTrackerComponent* _localPlayerTracker;

	UPROPERTY(Replicated, Transient, Export)
	UDebugTimerLogComponent* _debugLogTimer;

private:
	UFUNCTION()
	void PlayerDreamStateChanged(bool isInDreamWorld, bool locallyObservedChanged);

	UFUNCTION()
	void OnVoidZoneAboutToCloseWarning();

	UFUNCTION()
	void OnRep_PlayersInVoid();

	UFUNCTION()
	void OnPlayerAdded(ADBDPlayer* player);

protected:
	UFUNCTION()
	void OnLocallyObservedChanged();

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnVoidZoneOpen();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnVoidZoneClose();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnMoriBegin();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVoidZoneOpen();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVoidZoneClose();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVoidZoneAboutToClose();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerTeleported(ADBDPlayer* playerTeleported, bool teleportIntoVoid);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnMoriStartedInVoidZone();

public:
	UFUNCTION()
	void Authority_TurnAllRiftsIntoTeleporters(bool turnOnTeleporters);

	UFUNCTION()
	void Authority_PlayerTeleportedOutOfVoidZone(ADBDPlayer* playerTeleported, ULinkedTeleporterComponent* teleporterUsed);

private:
	UFUNCTION()
	void Authority_PlayerTeleportedInToVoidZone(ADBDPlayer* playerTeleported, ULinkedTeleporterComponent* teleporterUsed);

public:
	UFUNCTION()
	void Authority_PlayerPreTeleportOutOfVoidZone(ADBDPlayer* playerTeleported);

private:
	UFUNCTION()
	void Authority_PlayerPreTeleportInToVoidZone(ADBDPlayer* playerTeleported);

public:
	UFUNCTION()
	void Authority_OpenVoidZone(bool closeVoidAfterTimer);

private:
	UFUNCTION()
	void Authority_OnVoidEnergyDeposited(const int32 amountDeposited, EVoidEnergyChangeReason changeReason);

	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

	UFUNCTION()
	void Authority_OnComponentsAdded();

	UFUNCTION()
	void Authority_ForceTeleportPlayersOutOfVoidZone();

public:
	UFUNCTION()
	void Authority_CloseVoidZone();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHalloween2023EventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHalloween2023EventComponent) { return 0; }
