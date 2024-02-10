#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "IgnoreIfEventRecentlyEvaluatorCondition.generated.h"

UCLASS()
class UIgnoreIfEventRecentlyEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

public:
	UIgnoreIfEventRecentlyEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIgnoreIfEventRecentlyEvaluatorCondition) { return 0; }
