#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "IncrementOnModifierAddedEvaluator.generated.h"

UCLASS()
class UIncrementOnModifierAddedEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _trackedModifierFlag;

	UPROPERTY(EditDefaultsOnly)
	bool _incrementOnFlagAddedOnKiller;

public:
	UIncrementOnModifierAddedEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UIncrementOnModifierAddedEvaluator) { return 0; }
