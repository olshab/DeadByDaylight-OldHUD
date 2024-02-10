#pragma once

#include "CoreMinimal.h"
#include "HackableDroneState.h"
#include "K31DroneState.h"
#include "K31DroneBeingHackedState.generated.h"

UCLASS()
class THEK31_API UK31DroneBeingHackedState : public UK31DroneState, public IHackableDroneState
{
	GENERATED_BODY()

public:
	UK31DroneBeingHackedState();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneBeingHackedState) { return 0; }
