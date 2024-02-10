#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "MultipleEventsInSameFrameQuestEvaluator.generated.h"

UCLASS()
class UMultipleEventsInSameFrameQuestEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UMultipleEventsInSameFrameQuestEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UMultipleEventsInSameFrameQuestEvaluator) { return 0; }
