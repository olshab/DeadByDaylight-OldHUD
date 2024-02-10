#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "SimultaneousPlayerWithFlagQEEvaluator.generated.h"

class ADBDPlayer;

UCLASS()
class USimultaneousPlayerWithFlagQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<ADBDPlayer*> _inGamePlayers;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _modifierFlag;

public:
	USimultaneousPlayerWithFlagQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const USimultaneousPlayerWithFlagQEEvaluator) { return 0; }
