#pragma once

#include "CoreMinimal.h"
#include "K31DroneState.h"
#include "K31DroneInStashState.generated.h"

UCLASS()
class THEK31_API UK31DroneInStashState : public UK31DroneState
{
	GENERATED_BODY()

public:
	UK31DroneInStashState();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneInStashState) { return 0; }
