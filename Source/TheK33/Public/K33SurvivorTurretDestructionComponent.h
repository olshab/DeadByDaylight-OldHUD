#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K33SurvivorTurretDestructionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33SurvivorTurretDestructionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UK33SurvivorTurretDestructionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33SurvivorTurretDestructionComponent) { return 0; }
