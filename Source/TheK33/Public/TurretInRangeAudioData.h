#pragma once

#include "CoreMinimal.h"
#include "TurretInRangeAudioData.generated.h"

USTRUCT()
struct FTurretInRangeAudioData
{
	GENERATED_BODY()

public:
	THEK33_API FTurretInRangeAudioData();
};

FORCEINLINE uint32 GetTypeHash(const FTurretInRangeAudioData) { return 0; }
