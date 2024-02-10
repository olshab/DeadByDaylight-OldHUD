#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryFragmentDespawnWithTimerBehaviour.h"
#include "GameplayTagContainer.h"
#include "CoreMemoryFragmentDespawnWithTimerOnStateTagModifiedBehaviour.generated.h"

UCLASS(EditInlineNew)
class UCoreMemoryFragmentDespawnWithTimerOnStateTagModifiedBehaviour : public UCoreMemoryFragmentDespawnWithTimerBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _tagsToTrackToStartPhase;

public:
	UCoreMemoryFragmentDespawnWithTimerOnStateTagModifiedBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentDespawnWithTimerOnStateTagModifiedBehaviour) { return 0; }
