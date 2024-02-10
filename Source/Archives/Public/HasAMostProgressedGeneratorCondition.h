#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "HasAMostProgressedGeneratorCondition.generated.h"

UCLASS()
class ARCHIVES_API UHasAMostProgressedGeneratorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

public:
	UHasAMostProgressedGeneratorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasAMostProgressedGeneratorCondition) { return 0; }
