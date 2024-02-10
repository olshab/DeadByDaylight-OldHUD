#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DistanceToTargetData.generated.h"

USTRUCT()
struct FDistanceToTargetData
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FDateTime _lastUpdateTime;

	UPROPERTY()
	FDateTime _lastTargetTime;

public:
	DBDBOTS_API FDistanceToTargetData();
};

FORCEINLINE uint32 GetTypeHash(const FDistanceToTargetData) { return 0; }
