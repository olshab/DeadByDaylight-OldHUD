#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K31DroneOwnershipComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneOwnershipComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UK31DroneOwnershipComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneOwnershipComponent) { return 0; }
