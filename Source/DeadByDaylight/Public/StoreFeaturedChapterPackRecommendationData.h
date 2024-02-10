#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedSingleChapterPackRecommendationData.h"
#include "UObject/NoExportTypes.h"
#include "StoreFeaturedChapterPackRecommendationData.generated.h"

USTRUCT()
struct FStoreFeaturedChapterPackRecommendationData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<FStoreFeaturedSingleChapterPackRecommendationData> ChapterPacks;

	UPROPERTY(Transient)
	FDateTime ActiveFrom;

	UPROPERTY(Transient)
	FDateTime ActiveTo;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedChapterPackRecommendationData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedChapterPackRecommendationData) { return 0; }
