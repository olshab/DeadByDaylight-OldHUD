#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "GameEventData.h"
#include "LinkedTeleporterComponent.generated.h"

class ULinkedTeleporterComponent;
class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2023_API ULinkedTeleporterComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnVoidZoneEvent);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeleportInteractWithPlayer, ADBDPlayer*, player);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeleportEnabled, bool, isEnabled);

protected:
	UPROPERTY(BlueprintAssignable)
	FOnVoidZoneEvent Cosmetic_OnVoidZoneAboutToClose;

	UPROPERTY(BlueprintAssignable)
	FOnTeleportEnabled Cosmetic_OnTeleporterEnabled;

	UPROPERTY(BlueprintAssignable)
	FOnTeleportInteractWithPlayer Cosmetic_OnPlayerTeleported;

	UPROPERTY(BlueprintAssignable)
	FOnTeleportInteractWithPlayer Cosmetic_OnPlayerCooldownOver;

	UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(BindWidgetOptional))
	ULinkedTeleporterComponent* _linkedTeleporter;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _teleportationCooldownTime;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _survivorTagsPreventingTeleport;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _killerTagsPreventingTeleport;

	UPROPERTY(ReplicatedUsing=OnRep_IsAllowedToTeleport)
	bool _isAllowedToTeleport;

	UPROPERTY(EditDefaultsOnly)
	bool _forceCamperDropSpecialItemOnTeleport;

private:
	UFUNCTION()
	void OnVoidZoneAboutToClose();

	UFUNCTION()
	void OnTimerEnd(ADBDPlayer* player);

	UFUNCTION()
	void OnTeleporterTriggered(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnRep_IsAllowedToTeleport();

protected:
	UFUNCTION()
	void OnLevelReadyToPlay();

private:
	UFUNCTION()
	void OnEventComponentsSpawned();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TeleportPlayer(ADBDPlayer* player, const FVector teleportLocation);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULinkedTeleporterComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULinkedTeleporterComponent) { return 0; }
