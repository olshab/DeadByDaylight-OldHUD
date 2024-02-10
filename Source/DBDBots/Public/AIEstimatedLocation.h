#pragma once

#include "CoreMinimal.h"
#include "AIEstimatedLocation.generated.h"

USTRUCT()
struct FAIEstimatedLocation
{
	GENERATED_BODY()

public:
	DBDBOTS_API FAIEstimatedLocation();
};

FORCEINLINE uint32 GetTypeHash(const FAIEstimatedLocation) { return 0; }
