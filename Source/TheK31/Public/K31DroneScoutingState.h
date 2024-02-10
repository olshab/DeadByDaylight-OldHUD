#pragma once

#include "CoreMinimal.h"
#include "HackableDroneState.h"
#include "K31DroneState.h"
#include "K31DroneScoutingState.generated.h"

UCLASS()
class THEK31_API UK31DroneScoutingState : public UK31DroneState, public IHackableDroneState
{
	GENERATED_BODY()

public:
	UK31DroneScoutingState();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneScoutingState) { return 0; }
