#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "K33SelectControlStationInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK33SelectControlStationInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UK33SelectControlStationInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK33SelectControlStationInteraction) { return 0; }
