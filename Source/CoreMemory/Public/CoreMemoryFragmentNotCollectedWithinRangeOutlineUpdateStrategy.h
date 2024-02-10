#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryFragmentNotCollectedOutlineUpdateStrategy.h"
#include "CoreMemoryFragmentNotCollectedWithinRangeOutlineUpdateStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class COREMEMORY_API UCoreMemoryFragmentNotCollectedWithinRangeOutlineUpdateStrategy : public UCoreMemoryFragmentNotCollectedOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _auraDisplayedRange;

public:
	UCoreMemoryFragmentNotCollectedWithinRangeOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentNotCollectedWithinRangeOutlineUpdateStrategy) { return 0; }
