#pragma once

#include "CoreMinimal.h"
#include "ERecentlyActiveModifierTimerStartType.h"
#include "EvaluatorCondition.h"
#include "ERecentlyActiveModifierType.h"
#include "GameplayTagContainer.h"
#include "HasRecentlyActiveModifierFlagCondition.generated.h"

UCLASS(Abstract)
class ARCHIVES_API UHasRecentlyActiveModifierFlagCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	ERecentlyActiveModifierType _type;

	UPROPERTY(EditDefaultsOnly)
	ERecentlyActiveModifierTimerStartType _timerStartType;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _modifierTags;

public:
	UHasRecentlyActiveModifierFlagCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasRecentlyActiveModifierFlagCondition) { return 0; }
