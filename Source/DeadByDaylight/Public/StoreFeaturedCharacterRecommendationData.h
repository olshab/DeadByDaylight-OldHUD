#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedSingleCharacterRecommendationData.h"
#include "StoreFeaturedCharacterSlotRecommendationData.h"
#include "UObject/NoExportTypes.h"
#include "StoreFeaturedCharacterRecommendationData.generated.h"

USTRUCT()
struct FStoreFeaturedCharacterRecommendationData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<FStoreFeaturedCharacterSlotRecommendationData> Slots;

	UPROPERTY(Transient)
	TArray<FStoreFeaturedSingleCharacterRecommendationData> Killer;

	UPROPERTY(Transient)
	TArray<FStoreFeaturedSingleCharacterRecommendationData> Survivor;

	UPROPERTY(Transient)
	FDateTime ActiveFrom;

	UPROPERTY(Transient)
	FDateTime ActiveTo;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedCharacterRecommendationData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedCharacterRecommendationData) { return 0; }
