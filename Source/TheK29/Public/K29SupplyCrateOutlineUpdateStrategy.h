#pragma once

#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "K29SupplyCrateOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK29SupplyCrateOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UK29SupplyCrateOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK29SupplyCrateOutlineUpdateStrategy) { return 0; }
