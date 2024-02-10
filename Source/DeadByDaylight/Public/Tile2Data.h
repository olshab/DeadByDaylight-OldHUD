#pragma once

#include "CoreMinimal.h"
#include "ETileClassType.h"
#include "EGameplayElementType.h"
#include "ETileType.h"
#include "EDensity.h"
#include "Engine/DataTable.h"
#include "EQuadrantSpawnType.h"
#include "EPathType.h"
#include "EscapeStrategyType.h"
#include "UObject/NoExportTypes.h"
#include "EBasementType.h"
#include "Tile2Data.generated.h"

USTRUCT(BlueprintType)
struct FTile2Data: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString TileName;

	UPROPERTY(EditAnywhere)
	int32 MinimumSpacing;

	UPROPERTY(EditAnywhere)
	int32 MaximumSpacing;

	UPROPERTY(EditAnywhere)
	bool DiagonalSpacing;

	UPROPERTY(EditAnywhere)
	bool TypeSpacing;

	UPROPERTY(EditAnywhere)
	int32 MaximumCount;

	UPROPERTY(EditAnywhere)
	FIntPoint Dimension;

	UPROPERTY(EditAnywhere)
	TArray<EscapeStrategyType> AvailableEscapeTypes;

	UPROPERTY(EditAnywhere)
	ETileType Type;

	UPROPERTY(EditAnywhere)
	ETileClassType TileClassType;

	UPROPERTY(EditAnywhere)
	EDensity Density;

	UPROPERTY(EditAnywhere)
	EPathType Path;

	UPROPERTY(EditAnywhere)
	int32 Number;

	UPROPERTY(EditAnywhere)
	bool PlaceHolder;

	UPROPERTY(EditAnywhere)
	bool Replacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnPriorityTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

	UPROPERTY(EditAnywhere)
	FVector2D Coord;

	UPROPERTY(EditAnywhere)
	EQuadrantSpawnType QuadrantSpawnType;

	UPROPERTY(EditAnywhere)
	EBasementType BasementType;

	UPROPERTY(EditAnywhere)
	TArray<EGameplayElementType> AvailableGameplayElementTypes;

public:
	DEADBYDAYLIGHT_API FTile2Data();
};

FORCEINLINE uint32 GetTypeHash(const FTile2Data) { return 0; }
