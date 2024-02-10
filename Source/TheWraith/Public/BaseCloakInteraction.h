#pragma once

#include "CoreMinimal.h"
#include "BasicChargeableInteraction.h"
#include "BaseCloakInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBaseCloakInteraction : public UBasicChargeableInteraction
{
	GENERATED_BODY()

public:
	UBaseCloakInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBaseCloakInteraction) { return 0; }
