#pragma once

#include "CoreMinimal.h"
#include "SurvivorDroneInterpState.generated.h"

USTRUCT()
struct FSurvivorDroneInterpState
{
	GENERATED_BODY()

public:
	THEK31_API FSurvivorDroneInterpState();
};

FORCEINLINE uint32 GetTypeHash(const FSurvivorDroneInterpState) { return 0; }
