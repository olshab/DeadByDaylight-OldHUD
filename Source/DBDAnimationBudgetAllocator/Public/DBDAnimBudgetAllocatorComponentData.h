#pragma once

#include "CoreMinimal.h"
#include "DBDAnimBudgetAllocatorComponentData.generated.h"

USTRUCT()
struct FDBDAnimBudgetAllocatorComponentData
{
	GENERATED_BODY()

public:
	DBDANIMATIONBUDGETALLOCATOR_API FDBDAnimBudgetAllocatorComponentData();
};

FORCEINLINE uint32 GetTypeHash(const FDBDAnimBudgetAllocatorComponentData) { return 0; }
