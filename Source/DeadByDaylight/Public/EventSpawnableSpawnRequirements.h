#pragma once

#include "CoreMinimal.h"
#include "DataTableDropdown.h"
#include "EventSpawnableSpawnRequirements.generated.h"

USTRUCT(BlueprintType)
struct FEventSpawnableSpawnRequirements
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FDataTableDropdown Size;

	UPROPERTY(EditAnywhere)
	int32 MinSpawnNumber;

	UPROPERTY(EditAnywhere)
	int32 MaxSpawnNumber;

public:
	DEADBYDAYLIGHT_API FEventSpawnableSpawnRequirements();
};

FORCEINLINE uint32 GetTypeHash(const FEventSpawnableSpawnRequirements) { return 0; }
