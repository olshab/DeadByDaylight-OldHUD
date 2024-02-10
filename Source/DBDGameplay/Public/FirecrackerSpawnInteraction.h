#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "FirecrackerSpawnInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFirecrackerSpawnInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UFirecrackerSpawnInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UFirecrackerSpawnInteraction) { return 0; }
