#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InitOnSpawnDelegate.h"
#include "OnSetSpawnObjectDelegate.h"
#include "GameFramework/Actor.h"
#include "OnLevelLoadedDelegate.h"
#include "OnAllTileSpawnedDelegate.h"
#include "TileRandomizerData.h"
#include "Tile2.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ATile2 : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FRandomStream SharedTileRandomizer;

	UPROPERTY(BlueprintAssignable)
	FOnLevelLoadedDelegate OnLevelLoaded;

	UPROPERTY(BlueprintAssignable)
	FOnSetSpawnObjectDelegate OnSetSpawnObject;

	UPROPERTY(BlueprintAssignable)
	FOnAllTileSpawnedDelegate OnAllTileSpawned;

	UPROPERTY(BlueprintAssignable)
	FInitOnSpawnDelegate InitOnSpawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableRandomizer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RandomizerSeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTileRandomizerData> Randomizers;

public:
	ATile2();
};

FORCEINLINE uint32 GetTypeHash(const ATile2) { return 0; }
