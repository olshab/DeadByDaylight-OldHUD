#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "EEventCountComparisonOperator.h"
#include "GameplayTagContainer.h"
#include "EEventSubject.h"
#include "EventCountComparisonQEEvaluator.generated.h"

UCLASS()
class UEventCountComparisonQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _incrementCountEvents;

	UPROPERTY(EditDefaultsOnly)
	EEventSubject _incrementIfIAm;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _resetCountEvents;

	UPROPERTY(EditDefaultsOnly)
	EEventSubject _resetIfIAm;

	UPROPERTY(EditDefaultsOnly)
	EEventCountComparisonOperator _comparisonOperator;

public:
	UEventCountComparisonQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UEventCountComparisonQEEvaluator) { return 0; }
