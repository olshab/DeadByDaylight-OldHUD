#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedRecommendationImageData.h"
#include "StoreFeaturedSingleCharacterRecommendationData.generated.h"

USTRUCT()
struct FStoreFeaturedSingleCharacterRecommendationData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	int32 CharacterIndex;

	UPROPERTY(Transient)
	FStoreFeaturedRecommendationImageData Image;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedSingleCharacterRecommendationData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedSingleCharacterRecommendationData) { return 0; }
