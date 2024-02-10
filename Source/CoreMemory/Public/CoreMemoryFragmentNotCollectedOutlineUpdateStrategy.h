#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryFragmentOutlineUpdateStrategy.h"
#include "CoreMemoryFragmentNotCollectedOutlineUpdateStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class COREMEMORY_API UCoreMemoryFragmentNotCollectedOutlineUpdateStrategy : public UCoreMemoryFragmentOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UCoreMemoryFragmentNotCollectedOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentNotCollectedOutlineUpdateStrategy) { return 0; }
