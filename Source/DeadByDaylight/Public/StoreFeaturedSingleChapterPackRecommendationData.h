#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedRecommendationImageData.h"
#include "StoreFeaturedSingleChapterPackRecommendationData.generated.h"

USTRUCT()
struct FStoreFeaturedSingleChapterPackRecommendationData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString AssociatedDlcId;

	UPROPERTY(Transient)
	FStoreFeaturedRecommendationImageData Image;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedSingleChapterPackRecommendationData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedSingleChapterPackRecommendationData) { return 0; }
