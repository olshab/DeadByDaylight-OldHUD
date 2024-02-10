#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryFragmentMoveUnpredictableBehaviour.generated.h"

class AMeatHook;

UCLASS(EditInlineNew)
class UCoreMemoryFragmentMoveUnpredictableBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<AMeatHook*> _cachedMeatHooks;

public:
	UCoreMemoryFragmentMoveUnpredictableBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentMoveUnpredictableBehaviour) { return 0; }
