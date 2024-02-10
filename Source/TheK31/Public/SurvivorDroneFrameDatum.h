#pragma once

#include "CoreMinimal.h"
#include "SurvivorDroneFrameDatum.generated.h"

USTRUCT(BlueprintType)
struct FSurvivorDroneFrameDatum
{
	GENERATED_BODY()

public:
	THEK31_API FSurvivorDroneFrameDatum();
};

FORCEINLINE uint32 GetTypeHash(const FSurvivorDroneFrameDatum) { return 0; }
