#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "HasRecentEventHappenedWhileInStateTagCondition.generated.h"

UCLASS()
class ARCHIVES_API UHasRecentEventHappenedWhileInStateTagCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _gameEvent;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _stateTag;

public:
	UHasRecentEventHappenedWhileInStateTagCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasRecentEventHappenedWhileInStateTagCondition) { return 0; }
