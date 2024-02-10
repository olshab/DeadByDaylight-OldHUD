#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "TargetHasEndedChaseWithoutHitEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UTargetHasEndedChaseWithoutHitEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UTargetHasEndedChaseWithoutHitEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UTargetHasEndedChaseWithoutHitEvaluator) { return 0; }
