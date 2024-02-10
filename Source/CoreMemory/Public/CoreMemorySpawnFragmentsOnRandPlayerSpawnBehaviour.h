#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryFragmentSpawnData.h"
#include "ETileSpawnPointType.h"
#include "CoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour.generated.h"

UCLASS(EditInlineNew)
class UCoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FCoreMemoryFragmentSpawnData _fragmentSpawnData;

	UPROPERTY(EditDefaultsOnly)
	ETileSpawnPointType _tileSpawnPointType;

public:
	UCoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour) { return 0; }
