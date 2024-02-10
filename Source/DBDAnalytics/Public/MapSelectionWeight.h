#pragma once

#include "CoreMinimal.h"
#include "MapSelectionWeight.generated.h"

USTRUCT()
struct FMapSelectionWeight
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MapId;

	UPROPERTY()
	FString ThemeId;

	UPROPERTY()
	float Weight;

public:
	DBDANALYTICS_API FMapSelectionWeight();
};

FORCEINLINE uint32 GetTypeHash(const FMapSelectionWeight) { return 0; }
