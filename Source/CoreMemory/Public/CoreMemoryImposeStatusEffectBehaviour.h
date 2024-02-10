#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryStatusEffectDetails.h"
#include "CoreMemoryImposeStatusEffectBehaviour.generated.h"

UCLASS(EditInlineNew)
class UCoreMemoryImposeStatusEffectBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FCoreMemoryStatusEffectDetails _statusEffectToImposeOnFragmentCollected;

	UPROPERTY(EditDefaultsOnly)
	FCoreMemoryStatusEffectDetails _statusEffectToImposeOnMemoryAcquired;

	UPROPERTY(EditDefaultsOnly)
	FCoreMemoryStatusEffectDetails _statusEffectToImposeOnStartedSynchronizingMemory;

	UPROPERTY(EditDefaultsOnly)
	FCoreMemoryStatusEffectDetails _statusEffectToImposeOnMemorySynchronized;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldUseSameEffectForLastFragment;

public:
	UCoreMemoryImposeStatusEffectBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryImposeStatusEffectBehaviour) { return 0; }
