#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "K33SpawnTurretInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK33SpawnTurretInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UK33SpawnTurretInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK33SpawnTurretInteraction) { return 0; }
