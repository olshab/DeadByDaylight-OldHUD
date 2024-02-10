#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedRecommendationImageData.generated.h"

USTRUCT()
struct FStoreFeaturedRecommendationImageData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString Path;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedRecommendationImageData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedRecommendationImageData) { return 0; }
