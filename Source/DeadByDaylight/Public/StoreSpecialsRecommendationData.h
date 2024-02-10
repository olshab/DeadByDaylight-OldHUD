#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreSpecialsItemRecommendationsData.h"
#include "StoreSpecialsRecommendationData.generated.h"

USTRUCT()
struct FStoreSpecialsRecommendationData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FDateTime ActiveFrom;

	UPROPERTY(Transient)
	FDateTime ActiveTo;

	UPROPERTY(Transient)
	TArray<FString> CategoryPriorities;

	UPROPERTY(Transient)
	TArray<FStoreSpecialsItemRecommendationsData> Recommendations;

public:
	DEADBYDAYLIGHT_API FStoreSpecialsRecommendationData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialsRecommendationData) { return 0; }
