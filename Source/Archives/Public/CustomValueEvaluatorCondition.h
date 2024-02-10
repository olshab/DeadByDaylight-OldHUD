#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "ECustomValueComparator.h"
#include "CustomValueEvaluatorCondition.generated.h"

UCLASS(Abstract)
class UCustomValueEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FString _paramConditionKey;

	UPROPERTY(EditDefaultsOnly)
	ECustomValueComparator _comparator;

public:
	UCustomValueEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UCustomValueEvaluatorCondition) { return 0; }
