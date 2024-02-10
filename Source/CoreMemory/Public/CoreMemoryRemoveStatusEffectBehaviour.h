#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "Templates/SubclassOf.h"
#include "CoreMemoryRemoveStatusEffectBehaviour.generated.h"

class UStatusEffect;

UCLASS(EditInlineNew)
class UCoreMemoryRemoveStatusEffectBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _statusEffectToRemoveOnFragmentCollected;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _statusEffectToRemoveOnMemoryAcquired;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _statusEffectToRemoveOnStartedSynchronizingMemory;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _statusEffectToRemoveOnMemorySynchronized;

public:
	UCoreMemoryRemoveStatusEffectBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryRemoveStatusEffectBehaviour) { return 0; }
