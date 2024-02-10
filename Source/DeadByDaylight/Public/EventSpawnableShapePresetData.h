#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/NoExportTypes.h"
#include "EventSpawnableShapePresetData.generated.h"

USTRUCT()
struct FEventSpawnableShapePresetData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName Name;

	UPROPERTY(EditAnywhere)
	FVector MinBound;

	UPROPERTY(EditAnywhere)
	FVector MaxBound;

	UPROPERTY(EditAnywhere)
	int32 SpawnPriorityTier;

public:
	DEADBYDAYLIGHT_API FEventSpawnableShapePresetData();
};

FORCEINLINE uint32 GetTypeHash(const FEventSpawnableShapePresetData) { return 0; }
