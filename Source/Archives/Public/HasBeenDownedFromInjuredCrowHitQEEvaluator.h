#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "HasBeenDownedFromInjuredCrowHitQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UHasBeenDownedFromInjuredCrowHitQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UHasBeenDownedFromInjuredCrowHitQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHasBeenDownedFromInjuredCrowHitQEEvaluator) { return 0; }
