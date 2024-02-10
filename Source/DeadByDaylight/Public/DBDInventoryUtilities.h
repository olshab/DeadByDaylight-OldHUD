#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDInventoryUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDInventoryUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UDBDInventoryUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDBDInventoryUtilities) { return 0; }
