#pragma once

#include "CoreMinimal.h"
#include "RangeBasedCondition.h"
#include "HookedSurvivorRangeBaseCondition.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHookedSurvivorRangeBaseCondition : public URangeBasedCondition
{
	GENERATED_BODY()

public:
	UHookedSurvivorRangeBaseCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHookedSurvivorRangeBaseCondition) { return 0; }
