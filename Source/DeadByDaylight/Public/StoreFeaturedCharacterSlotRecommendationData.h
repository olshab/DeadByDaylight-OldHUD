#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedCharacterSlotRecommendationData.generated.h"

USTRUCT()
struct FStoreFeaturedCharacterSlotRecommendationData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString Role;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedCharacterSlotRecommendationData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedCharacterSlotRecommendationData) { return 0; }
