#pragma once

#include "CoreMinimal.h"
#include "PathToLoopInfo.generated.h"

USTRUCT()
struct FPathToLoopInfo
{
	GENERATED_BODY()

public:
	DBDBOTS_API FPathToLoopInfo();
};

FORCEINLINE uint32 GetTypeHash(const FPathToLoopInfo) { return 0; }
