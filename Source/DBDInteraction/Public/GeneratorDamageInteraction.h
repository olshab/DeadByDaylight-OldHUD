#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "GeneratorDamageInteraction.generated.h"

class UAkAudioEvent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UGeneratorDamageInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TMap<FGameplayTag, UAkAudioEvent*> _canceledSfxBasedOnKiller;

public:
	UGeneratorDamageInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorDamageInteraction) { return 0; }
