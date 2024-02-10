#pragma once

#include "CoreMinimal.h"
#include "DataTableDropdown.h"
#include "EventSpawnablePositionDropdown.generated.h"

USTRUCT(BlueprintType)
struct FEventSpawnablePositionDropdown: public FDataTableDropdown
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FEventSpawnablePositionDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FEventSpawnablePositionDropdown) { return 0; }
