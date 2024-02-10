#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "HasDownedTargetAnyDebuffEffectEvaluator.generated.h"

UCLASS()
class UHasDownedTargetAnyDebuffEffectEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _targetPreventingTags;

public:
	UHasDownedTargetAnyDebuffEffectEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHasDownedTargetAnyDebuffEffectEvaluator) { return 0; }
