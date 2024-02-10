#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "Templates/SubclassOf.h"
#include "CoreMemoryDebugSpawnBehaviour.generated.h"

class ACoreMemoryFragment;

UCLASS(EditInlineNew)
class UCoreMemoryDebugSpawnBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACoreMemoryFragment> _fragmentClass;

	UPROPERTY(EditDefaultsOnly)
	int32 _numberOfFragmentsToSpawn;

	UPROPERTY(EditDefaultsOnly)
	float _fragmentSpawnOffset;

public:
	UCoreMemoryDebugSpawnBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryDebugSpawnBehaviour) { return 0; }
