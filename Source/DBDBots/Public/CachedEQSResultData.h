#pragma once

#include "CoreMinimal.h"
#include "CachedEQSResultData.generated.h"

USTRUCT()
struct FCachedEQSResultData
{
	GENERATED_BODY()

public:
	DBDBOTS_API FCachedEQSResultData();
};

FORCEINLINE uint32 GetTypeHash(const FCachedEQSResultData) { return 0; }
