#pragma once

#include "CoreMinimal.h"
#include "ESubjectPerspective.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "EventOccuredAndStayNearQuestEvaluator.generated.h"

UCLASS()
class UEventOccuredAndStayNearQuestEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _triggerEvent;

	UPROPERTY(EditDefaultsOnly)
	ESubjectPerspective _instigatorPerspective;

	UPROPERTY(EditDefaultsOnly)
	ESubjectPerspective _targetPerspective;

public:
	UEventOccuredAndStayNearQuestEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UEventOccuredAndStayNearQuestEvaluator) { return 0; }
