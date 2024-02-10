#pragma once

#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "WakerObjectOutlineStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UWakerObjectOutlineStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UWakerObjectOutlineStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UWakerObjectOutlineStrategy) { return 0; }
