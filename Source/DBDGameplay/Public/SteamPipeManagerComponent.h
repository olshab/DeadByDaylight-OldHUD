#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "ESteamPipeState.h"
#include "SteamPipeManagerComponent.generated.h"

class USteamPipeEffectComponent;
class ASteamPipe;
class UChargeableComponent;
class ASteamPipeResetSwitch;
class ADBDPlayer;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API USteamPipeManagerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<USteamPipeEffectComponent> _steamPipeEffectComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UChargeableComponent> _chargeableComponentClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _resetSwitchCooldownTime;

	UPROPERTY(Replicated, Transient, Export)
	UChargeableComponent* _sharedChargeableComponent;

	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<ASteamPipe>> _steamPipes;

	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<ASteamPipeResetSwitch>> _steamPipeResetSwitches;

	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<ADBDPlayer>> _interactingPlayersArray;

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void Authority_UpdateCanUseResetSwitch();

	UFUNCTION()
	void Authority_OnSwitchCooldownComplete();

	UFUNCTION()
	void Authority_OnSteamPipeStateChanged(const ASteamPipe* steamPipe, const ESteamPipeState newState);

	UFUNCTION()
	void Authority_OnResetInteractionComplete(bool completed, const TArray<AActor*>& instigatorsForCompletion);

	UFUNCTION()
	void Authority_OnCharacterAdded(ADBDPlayer* character);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USteamPipeManagerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USteamPipeManagerComponent) { return 0; }
