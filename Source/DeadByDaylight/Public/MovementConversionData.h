#pragma once

#include "CoreMinimal.h"
#include "MovementConversionData.generated.h"

USTRUCT()
struct FMovementConversionData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FMovementConversionData();
};

FORCEINLINE uint32 GetTypeHash(const FMovementConversionData) { return 0; }
