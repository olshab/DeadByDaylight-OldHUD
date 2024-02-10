#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "K34EnterTipToeModeInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK34EnterTipToeModeInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UK34EnterTipToeModeInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK34EnterTipToeModeInteraction) { return 0; }
