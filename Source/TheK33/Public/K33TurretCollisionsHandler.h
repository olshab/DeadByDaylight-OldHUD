#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K33TurretCollisionsHandler.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33TurretCollisionsHandler : public UActorComponent
{
	GENERATED_BODY()

public:
	UK33TurretCollisionsHandler();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretCollisionsHandler) { return 0; }
