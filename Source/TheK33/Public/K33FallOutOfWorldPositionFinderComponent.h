#pragma once

#include "CoreMinimal.h"
#include "FallOutOfWorldPositionFinder.h"
#include "Components/ActorComponent.h"
#include "K33FallOutOfWorldPositionFinderComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK33_API UK33FallOutOfWorldPositionFinderComponent : public UActorComponent, public IFallOutOfWorldPositionFinder
{
	GENERATED_BODY()

public:
	UK33FallOutOfWorldPositionFinderComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33FallOutOfWorldPositionFinderComponent) { return 0; }
