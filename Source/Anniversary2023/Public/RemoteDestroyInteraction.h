#pragma once

#include "CoreMinimal.h"
#include "InvitationInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "RemoteDestroyInteraction.generated.h"

class AInteractable;
class ADBDPlayer;

UCLASS(Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class URemoteDestroyInteraction : public UInvitationInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _remoteDestroyDuration;

	UPROPERTY(Transient)
	AInteractable* _interactable;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RemoteDestroy(ADBDPlayer* player, AInteractable* interactable);

protected:
	UFUNCTION()
	void ExplodeInteractable(ADBDPlayer* player, AInteractable* interactable) const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRemoteDestroy(ADBDPlayer* interactingPlayer, AInteractable* interactable);

public:
	URemoteDestroyInteraction();
};

FORCEINLINE uint32 GetTypeHash(const URemoteDestroyInteraction) { return 0; }
