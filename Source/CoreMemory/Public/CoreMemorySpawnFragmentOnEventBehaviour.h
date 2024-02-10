#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryFragmentSpawnData.h"
#include "GameplayTagContainer.h"
#include "CoreMemorySpawnFragmentOnEventBehaviour.generated.h"

UCLASS(EditInlineNew)
class UCoreMemorySpawnFragmentOnEventBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FCoreMemoryFragmentSpawnData _fragmentSpawnData;

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _spawnFragmentOnGameEvents;

	UPROPERTY(EditDefaultsOnly)
	bool _onlyForKiller;

	UPROPERTY(EditDefaultsOnly)
	bool _onlyForSurvivors;

public:
	UCoreMemorySpawnFragmentOnEventBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemorySpawnFragmentOnEventBehaviour) { return 0; }
