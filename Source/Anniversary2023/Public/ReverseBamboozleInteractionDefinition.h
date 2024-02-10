#pragma once

#include "CoreMinimal.h"
#include "InvitationInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "Templates/SubclassOf.h"
#include "ReverseBamboozleInteractionDefinition.generated.h"

class ADBDPlayer;
class ABlockFeedbackBase;
class AWindow;

UCLASS(Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UReverseBamboozleInteractionDefinition : public UInvitationInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _vaultBlockerDuration;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<ABlockFeedbackBase>> _windowBlockSelfFeedbackClasses;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<ABlockFeedbackBase>> _windowBlockOtherFeedbackClasses;

	UPROPERTY(Transient)
	AWindow* _authorityWindow;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnWindowBlockBegin(ADBDPlayer* abilityCaster, AWindow* window);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnWindowBlockBegin(ADBDPlayer* abilityCaster, AWindow* window, float duration);

public:
	UReverseBamboozleInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UReverseBamboozleInteractionDefinition) { return 0; }
