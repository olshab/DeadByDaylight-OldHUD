#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "SynchronizeCoreMemoryInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USynchronizeCoreMemoryInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	USynchronizeCoreMemoryInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USynchronizeCoreMemoryInteraction) { return 0; }
