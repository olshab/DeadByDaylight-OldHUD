#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "K34ExitTipToeModeInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK34ExitTipToeModeInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UK34ExitTipToeModeInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK34ExitTipToeModeInteraction) { return 0; }
