#pragma once

#include "CoreMinimal.h"
#include "EAttackerSubject.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "EAttackType.h"
#include "IsEventAttackOfTypeQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UIsEventAttackOfTypeQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _attackEvent;

	UPROPERTY(EditDefaultsOnly)
	EAttackerSubject _attackerSubject;

	UPROPERTY(EditDefaultsOnly)
	TArray<EAttackType> _attackOfType;

public:
	UIsEventAttackOfTypeQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UIsEventAttackOfTypeQEEvaluator) { return 0; }
