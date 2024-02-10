#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K31DroneDebugComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneDebugComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UK31DroneDebugComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneDebugComponent) { return 0; }
