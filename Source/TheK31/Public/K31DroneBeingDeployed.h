#pragma once

#include "CoreMinimal.h"
#include "K31DroneState.h"
#include "K31DroneBeingDeployed.generated.h"

UCLASS()
class THEK31_API UK31DroneBeingDeployed : public UK31DroneState
{
	GENERATED_BODY()

public:
	UK31DroneBeingDeployed();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneBeingDeployed) { return 0; }
