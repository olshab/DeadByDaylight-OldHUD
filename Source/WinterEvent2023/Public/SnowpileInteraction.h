#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "SnowpileInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class WINTEREVENT2023_API USnowpileInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	USnowpileInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USnowpileInteraction) { return 0; }
