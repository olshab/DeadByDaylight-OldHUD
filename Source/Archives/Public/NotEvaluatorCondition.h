#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "Templates/SubclassOf.h"
#include "NotEvaluatorCondition.generated.h"

UCLASS(Abstract)
class UNotEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEvaluatorCondition> _conditionToNegateClass;

private:
	UPROPERTY(Transient)
	UEvaluatorCondition* _conditionPrivate;

public:
	UNotEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UNotEvaluatorCondition) { return 0; }
