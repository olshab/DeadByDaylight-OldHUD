#pragma once

#include "CoreMinimal.h"
#include "NearGameObjectEvaluatorCondition.h"
#include "NearGameObjectAtDiversionLocationEvaluatorCondition.generated.h"

UCLASS()
class UNearGameObjectAtDiversionLocationEvaluatorCondition : public UNearGameObjectEvaluatorCondition
{
	GENERATED_BODY()

public:
	UNearGameObjectAtDiversionLocationEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UNearGameObjectAtDiversionLocationEvaluatorCondition) { return 0; }
