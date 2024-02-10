#pragma once

#include "CoreMinimal.h"
#include "StoreSpecialsItemRecommendationsData.generated.h"

USTRUCT()
struct FStoreSpecialsItemRecommendationsData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString Category;

	UPROPERTY(Transient)
	TArray<FName> IDs;

public:
	DEADBYDAYLIGHT_API FStoreSpecialsItemRecommendationsData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialsItemRecommendationsData) { return 0; }
