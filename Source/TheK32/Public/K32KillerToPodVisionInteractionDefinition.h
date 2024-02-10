#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "K32KillerToPodVisionInteractionDefinition.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32KillerToPodVisionInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UK32KillerToPodVisionInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK32KillerToPodVisionInteractionDefinition) { return 0; }
