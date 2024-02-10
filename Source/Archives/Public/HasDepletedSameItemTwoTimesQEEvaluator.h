#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "ELoadoutItemType.h"
#include "HasDepletedSameItemTwoTimesQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UHasDepletedSameItemTwoTimesQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	ELoadoutItemType _itemType;

public:
	UHasDepletedSameItemTwoTimesQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHasDepletedSameItemTwoTimesQEEvaluator) { return 0; }
