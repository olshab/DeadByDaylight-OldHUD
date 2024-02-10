#pragma once

#include "CoreMinimal.h"
#include "FocusPointData.generated.h"

USTRUCT()
struct FFocusPointData
{
	GENERATED_BODY()

public:
	DBDBOTS_API FFocusPointData();
};

FORCEINLINE uint32 GetTypeHash(const FFocusPointData) { return 0; }
