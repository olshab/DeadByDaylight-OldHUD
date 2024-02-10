#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EventSpawnableSpawnRequirements.h"
#include "ETileType.h"
#include "TileEventSpawnerSettingData.generated.h"

USTRUCT(BlueprintType)
struct FTileEventSpawnerSettingData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	ETileType TileType;

	UPROPERTY(EditAnywhere)
	bool IsExitGate;

	UPROPERTY(EditAnywhere)
	float SpawnProbability;

	UPROPERTY(EditAnywhere)
	float MinBudget;

	UPROPERTY(EditAnywhere)
	float MaxBudget;

	UPROPERTY(EditAnywhere)
	TArray<FEventSpawnableSpawnRequirements> SpawnRequirementsPerSize;

public:
	DEADBYDAYLIGHT_API FTileEventSpawnerSettingData();
};

FORCEINLINE uint32 GetTypeHash(const FTileEventSpawnerSettingData) { return 0; }
