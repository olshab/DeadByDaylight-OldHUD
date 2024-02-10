#pragma once

#include "CoreMinimal.h"
#include "BaseCloakInteraction.h"
#include "CloakInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCloakInteraction : public UBaseCloakInteraction
{
	GENERATED_BODY()

public:
	UCloakInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UCloakInteraction) { return 0; }
