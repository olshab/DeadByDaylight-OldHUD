#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EventObjectItemWidgetInterface.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "ECamperDamageState.h"
#include "ImpactInfo.h"
#include "SnowballPlayerComponent.generated.h"

class ASnowballLauncherController;
class UThrowSnowballInteraction;
class UTimerObject;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class WINTEREVENT2023_API USnowballPlayerComponent : public UActorComponent, public IEventObjectItemWidgetInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_CooldownTimer, Transient, Export)
	UTimerObject* _cooldownTimer;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ASnowballLauncherController> _snowballLauncherControllerClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UThrowSnowballInteraction> _snowballThrowingInteractionClassSurvivor;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UThrowSnowballInteraction> _snowballThrowingInteractionClassKiller;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _cooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _snowballLaunchDelayDurationSurvivorFemale;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _snowballLaunchDelayDurationSurvivorMale;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _snowballLaunchDelayDurationKiller;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _hideVFXTags;

	UPROPERTY(ReplicatedUsing=OnRep_SnowballLauncherController)
	ASnowballLauncherController* _snowballLauncherController;

	UPROPERTY(ReplicatedUsing=OnRep_SnowballThrowInteraction, Export)
	UThrowSnowballInteraction* _snowballThrowInteraction;

private:
	UFUNCTION()
	void OnRep_SnowballThrowInteraction();

	UFUNCTION()
	void OnRep_SnowballLauncherController();

	UFUNCTION()
	void OnRep_CooldownTimer();

	UFUNCTION()
	void OnOwningCamperGuidedStateChanged();

	UFUNCTION()
	void OnCamperDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVFXVignetteTagAddedOrRemoved(ADBDPlayer* player, bool added);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnThrownSnowballHitPlayer(ADBDPlayer* owningPlayer, ADBDPlayer* hitPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnThrownSnowballHitCollision(ADBDPlayer* owningPlayer, FImpactInfo impactInfo);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowballThrowStart(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowballThrown();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowballsDepleted(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowballCollected();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerUnhidden(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerHidden(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerDiedOrBeingKilled(ADBDPlayer* deadPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLocallyObservedChanged(bool isLocallyObserved, ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCamperPickUpEndOrDropped(ADBDPlayer* pickedUpPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCamperPickedUp(ADBDPlayer* pickedUpPlayer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USnowballPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USnowballPlayerComponent) { return 0; }
