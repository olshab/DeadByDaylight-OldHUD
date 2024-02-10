#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MapSelectionWeight.h"
#include "MapSelectionAnalytics.generated.h"

USTRUCT()
struct FMapSelectionAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString KrakenMatchId;

	UPROPERTY()
	FString SelectedMapId;

	UPROPERTY()
	int32 MapSeed;

	UPROPERTY()
	float SelectedMapOdds;

	UPROPERTY()
	float TotalMapWeight;

	UPROPERTY()
	TArray<FMapSelectionWeight> MapWeights;

public:
	DBDANALYTICS_API FMapSelectionAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMapSelectionAnalytics) { return 0; }
