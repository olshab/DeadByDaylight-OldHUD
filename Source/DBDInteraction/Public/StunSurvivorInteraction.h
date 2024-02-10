#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "StunSurvivorInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UStunSurvivorInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UStunSurvivorInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UStunSurvivorInteraction) { return 0; }
