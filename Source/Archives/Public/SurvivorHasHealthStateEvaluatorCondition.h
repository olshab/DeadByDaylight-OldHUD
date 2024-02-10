#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "ECamperDamageState.h"
#include "SurvivorHasHealthStateEvaluatorCondition.generated.h"

UCLASS()
class USurvivorHasHealthStateEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	ECamperDamageState _specifiedDamageState;

public:
	USurvivorHasHealthStateEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorHasHealthStateEvaluatorCondition) { return 0; }
