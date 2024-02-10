#pragma once

#include "CoreMinimal.h"
#include "K33TunnelBlockSpawnDatum.h"
#include "K33TunnelBlockSpawnData.generated.h"

USTRUCT()
struct FK33TunnelBlockSpawnData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FK33TunnelBlockSpawnDatum> Data;

	UPROPERTY()
	bool IsDataSet;

public:
	THEK33_API FK33TunnelBlockSpawnData();
};

FORCEINLINE uint32 GetTypeHash(const FK33TunnelBlockSpawnData) { return 0; }
