#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "HasFinishedAGeneratorCondition.generated.h"

UCLASS()
class ARCHIVES_API UHasFinishedAGeneratorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

public:
	UHasFinishedAGeneratorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasFinishedAGeneratorCondition) { return 0; }
