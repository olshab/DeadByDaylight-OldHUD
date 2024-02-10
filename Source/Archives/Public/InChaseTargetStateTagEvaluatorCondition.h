#pragma once

#include "CoreMinimal.h"
#include "EInChaseTargetLogic.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "InChaseTargetStateTagEvaluatorCondition.generated.h"

UCLASS(Abstract)
class UInChaseTargetStateTagEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _gameplayTag;

	UPROPERTY(EditDefaultsOnly)
	EInChaseTargetLogic _logic;

public:
	UInChaseTargetStateTagEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UInChaseTargetStateTagEvaluatorCondition) { return 0; }
