#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "IsTargetOfTypeEvaluatorCondition.generated.h"

UCLASS(Abstract)
class UIsTargetOfTypeEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

public:
	UIsTargetOfTypeEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIsTargetOfTypeEvaluatorCondition) { return 0; }
