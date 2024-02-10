#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "EQueryConditionType.h"
#include "GameObjectQuery.h"
#include "NearGameObjectEvaluatorCondition.generated.h"

UCLASS(Abstract)
class UNearGameObjectEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	EQueryConditionType _conditionType;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameObjectQuery> _gameObjectsQueries;

public:
	UNearGameObjectEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UNearGameObjectEvaluatorCondition) { return 0; }
