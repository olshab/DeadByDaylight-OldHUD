#pragma once

#include "CoreMinimal.h"
#include "WeightedWishedObjectMapContainer.generated.h"

USTRUCT()
struct FWeightedWishedObjectMapContainer
{
	GENERATED_BODY()

public:
	DBDBOTS_API FWeightedWishedObjectMapContainer();
};

FORCEINLINE uint32 GetTypeHash(const FWeightedWishedObjectMapContainer) { return 0; }
