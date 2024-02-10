#pragma once

#include "CoreMinimal.h"
#include "RangeBasedCondition.h"
#include "IsInRangeOfK28UsedLocker.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsInRangeOfK28UsedLocker : public URangeBasedCondition
{
	GENERATED_BODY()

public:
	UIsInRangeOfK28UsedLocker();
};

FORCEINLINE uint32 GetTypeHash(const UIsInRangeOfK28UsedLocker) { return 0; }
