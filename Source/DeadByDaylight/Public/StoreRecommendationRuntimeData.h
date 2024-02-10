#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedCharacterRecommendationData.h"
#include "StoreFeaturedChapterPackRecommendationData.h"
#include "StoreSpecialsRecommendationData.h"
#include "StoreRecommendationRuntimeData.generated.h"

USTRUCT()
struct FStoreRecommendationRuntimeData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<FStoreFeaturedCharacterRecommendationData> FeaturedCharacterRecommendations;

	UPROPERTY(Transient)
	TArray<FStoreFeaturedChapterPackRecommendationData> FeaturedChapterPackRecommendations;

	UPROPERTY(Transient)
	TArray<FStoreSpecialsRecommendationData> SpecialsRecommendations;

public:
	DEADBYDAYLIGHT_API FStoreRecommendationRuntimeData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreRecommendationRuntimeData) { return 0; }
