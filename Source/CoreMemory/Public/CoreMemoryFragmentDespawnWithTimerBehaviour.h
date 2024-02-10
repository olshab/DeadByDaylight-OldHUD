#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryFragmentDespawnWithTimerBehaviour.generated.h"

UCLASS(EditInlineNew)
class UCoreMemoryFragmentDespawnWithTimerBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _fragmentPhaseIdleTime;

public:
	UCoreMemoryFragmentDespawnWithTimerBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentDespawnWithTimerBehaviour) { return 0; }
