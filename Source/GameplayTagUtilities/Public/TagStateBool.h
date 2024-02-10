#pragma once

#include "CoreMinimal.h"
#include "TagStateBoolBase.h"
#include "TagStateBool.generated.h"

USTRUCT(BlueprintType)
struct FTagStateBool: public FTagStateBoolBase
{
	GENERATED_BODY()

public:
	GAMEPLAYTAGUTILITIES_API FTagStateBool();
};

FORCEINLINE uint32 GetTypeHash(const FTagStateBool) { return 0; }
