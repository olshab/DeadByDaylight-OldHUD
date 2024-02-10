#pragma once

#include "CoreMinimal.h"
#include "CombinedExperimentData.generated.h"

USTRUCT(BlueprintType)
struct FCombinedExperimentData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FCombinedExperimentData();
};

FORCEINLINE uint32 GetTypeHash(const FCombinedExperimentData) { return 0; }
