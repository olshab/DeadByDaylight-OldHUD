#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryFragmentOutlineUpdateStrategy.h"
#include "CoreMemoryFragmentNotTriggeredOutlineUpdateStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class COREMEMORY_API UCoreMemoryFragmentNotTriggeredOutlineUpdateStrategy : public UCoreMemoryFragmentOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UCoreMemoryFragmentNotTriggeredOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentNotTriggeredOutlineUpdateStrategy) { return 0; }
