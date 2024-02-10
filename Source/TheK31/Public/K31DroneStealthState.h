#pragma once

#include "CoreMinimal.h"
#include "HackableDroneState.h"
#include "K31DroneState.h"
#include "K31DroneStealthState.generated.h"

UCLASS()
class THEK31_API UK31DroneStealthState : public UK31DroneState, public IHackableDroneState
{
	GENERATED_BODY()

public:
	UK31DroneStealthState();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneStealthState) { return 0; }
