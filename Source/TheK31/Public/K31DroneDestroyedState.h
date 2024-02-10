#pragma once

#include "CoreMinimal.h"
#include "K31DroneState.h"
#include "K31DroneDestroyedState.generated.h"

UCLASS()
class THEK31_API UK31DroneDestroyedState : public UK31DroneState
{
	GENERATED_BODY()

public:
	UK31DroneDestroyedState();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneDestroyedState) { return 0; }
