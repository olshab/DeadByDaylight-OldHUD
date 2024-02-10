#pragma once

#include "CoreMinimal.h"
#include "TurretRangeChangedHandleData.generated.h"

USTRUCT()
struct FTurretRangeChangedHandleData
{
	GENERATED_BODY()

public:
	THEK33_API FTurretRangeChangedHandleData();
};

FORCEINLINE uint32 GetTypeHash(const FTurretRangeChangedHandleData) { return 0; }
