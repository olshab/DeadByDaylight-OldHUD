#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "ERecentlyActiveStateTagType.h"
#include "GameplayTagContainer.h"
#include "ERecentlyActiveStateTagTimerStartType.h"
#include "RecentlyActiveStateTagEvaluatorCondition.generated.h"

UCLASS(Abstract)
class URecentlyActiveStateTagEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	ERecentlyActiveStateTagType _type;

	UPROPERTY(EditDefaultsOnly)
	ERecentlyActiveStateTagTimerStartType _timerStartType;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _stateTags;

public:
	URecentlyActiveStateTagEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const URecentlyActiveStateTagEvaluatorCondition) { return 0; }
