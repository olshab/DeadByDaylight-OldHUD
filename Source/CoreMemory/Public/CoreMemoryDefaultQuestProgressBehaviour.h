#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "GameplayTagContainer.h"
#include "CoreMemoryDefaultQuestProgressBehaviour.generated.h"

UCLASS(EditInlineNew)
class UCoreMemoryDefaultQuestProgressBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _onPlayerExitWithMemoryAcquiredScoreTag;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _onFragmentCollectedScoreTag;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _onMemoryAcquiredScoreTag;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _onMemorySynchronizedScoreTag;

public:
	UCoreMemoryDefaultQuestProgressBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryDefaultQuestProgressBehaviour) { return 0; }
