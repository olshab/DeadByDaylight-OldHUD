#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorStatusInterface.h"
#include "K32SurvivorStatusComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK32SurvivorStatusComponent : public UActorComponent, public ISurvivorStatusInterface
{
	GENERATED_BODY()

public:
	UK32SurvivorStatusComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32SurvivorStatusComponent) { return 0; }
