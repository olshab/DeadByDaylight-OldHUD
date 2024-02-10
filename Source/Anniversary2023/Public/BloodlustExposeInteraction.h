#pragma once

#include "CoreMinimal.h"
#include "InvitationInteractionDefinition.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "BloodlustExposeInteraction.generated.h"

class ACamperPlayer;
class ADBDPlayer;
class UStatusEffect;

UCLASS(Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBloodlustExposeInteraction : public UInvitationInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UStatusEffect> _effectToApply;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _bloodlustExposeDuration;

private:
	UPROPERTY(Transient)
	ACamperPlayer* _camper;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_BloodlustExpose(ADBDPlayer* player, ACamperPlayer* target);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_BloodlustExpose(ADBDPlayer* player, ACamperPlayer* target);

public:
	UBloodlustExposeInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBloodlustExposeInteraction) { return 0; }
