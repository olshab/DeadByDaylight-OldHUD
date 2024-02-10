#pragma once

#include "CoreMinimal.h"
#include "TotalDistanceEvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "TotalDistanceWithStateTagEvaluatorCondition.generated.h"

UCLASS()
class UTotalDistanceWithStateTagEvaluatorCondition : public UTotalDistanceEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagQuery _stateTagQuery;

public:
	UTotalDistanceWithStateTagEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UTotalDistanceWithStateTagEvaluatorCondition) { return 0; }
