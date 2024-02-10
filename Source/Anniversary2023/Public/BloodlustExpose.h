#pragma once

#include "CoreMinimal.h"
#include "InvitationInteractionDefinition.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "BloodlustExpose.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBloodlustExpose : public UInvitationInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UStatusEffect> _effectToApply;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _bloodlustExposeDuration;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);

public:
	UBloodlustExpose();
};

FORCEINLINE uint32 GetTypeHash(const UBloodlustExpose) { return 0; }
