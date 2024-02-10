#pragma once

#include "CoreMinimal.h"
#include "RecentlyActiveStateTagEvaluatorCondition.h"
#include "AnyPlayerRecentlyActiveStateTagEvaluatorCondition.generated.h"

UCLASS(Abstract)
class UAnyPlayerRecentlyActiveStateTagEvaluatorCondition : public URecentlyActiveStateTagEvaluatorCondition
{
	GENERATED_BODY()

public:
	UAnyPlayerRecentlyActiveStateTagEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UAnyPlayerRecentlyActiveStateTagEvaluatorCondition) { return 0; }
