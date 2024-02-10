#pragma once

#include "CoreMinimal.h"
#include "K31DroneZoneOverlapDatum.generated.h"

USTRUCT()
struct FK31DroneZoneOverlapDatum
{
	GENERATED_BODY()

public:
	THEK31_API FK31DroneZoneOverlapDatum();
};

FORCEINLINE uint32 GetTypeHash(const FK31DroneZoneOverlapDatum) { return 0; }
