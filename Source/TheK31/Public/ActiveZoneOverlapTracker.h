#pragma once

#include "CoreMinimal.h"
#include "ActiveZoneOverlapTracker.generated.h"

USTRUCT()
struct FActiveZoneOverlapTracker
{
	GENERATED_BODY()

public:
	THEK31_API FActiveZoneOverlapTracker();
};

FORCEINLINE uint32 GetTypeHash(const FActiveZoneOverlapTracker) { return 0; }
