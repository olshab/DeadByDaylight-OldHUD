#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "ESkillCheckCustomType.h"
#include "IgnoreSkillCheckTypesEvaluatorCondition.generated.h"

UCLASS()
class UIgnoreSkillCheckTypesEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _ignoreAllButConsideredTypes;

	UPROPERTY(EditDefaultsOnly)
	TSet<ESkillCheckCustomType> _consideredTypes;

public:
	UIgnoreSkillCheckTypesEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIgnoreSkillCheckTypesEvaluatorCondition) { return 0; }
