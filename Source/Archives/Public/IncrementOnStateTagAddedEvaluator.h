#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "IncrementOnStateTagAddedEvaluator.generated.h"

UCLASS()
class UIncrementOnStateTagAddedEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _trackedStateTags;

public:
	UIncrementOnStateTagAddedEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UIncrementOnStateTagAddedEvaluator) { return 0; }
