#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/NoExportTypes.h"
#include "EventSpawnablePositionData.generated.h"

USTRUCT()
struct FEventSpawnablePositionData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName Name;

	UPROPERTY(EditAnywhere)
	FVector BoundOffsetMultiplier;

public:
	DEADBYDAYLIGHT_API FEventSpawnablePositionData();
};

FORCEINLINE uint32 GetTypeHash(const FEventSpawnablePositionData) { return 0; }
