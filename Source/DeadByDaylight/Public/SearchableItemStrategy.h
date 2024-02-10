#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SearchableItemStrategy.generated.h"

UCLASS(Abstract, EditInlineNew)
class USearchableItemStrategy : public UObject
{
	GENERATED_BODY()

public:
	USearchableItemStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USearchableItemStrategy) { return 0; }
