#pragma once

#include "CoreMinimal.h"
#include "StoreSpecialPackCatalogPrice.h"
#include "StoreSpecialPackCatalogActivationData.h"
#include "StoreSpecialPackCatalogItemMetaData.generated.h"

USTRUCT()
struct FStoreSpecialPackCatalogItemMetaData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<FStoreSpecialPackCatalogPrice> FullPrice;

	UPROPERTY(Transient)
	uint32 SortOrder;

	UPROPERTY(Transient)
	FStoreSpecialPackCatalogActivationData Activation;

	UPROPERTY(Transient)
	FString ImagePath;

	UPROPERTY(Transient)
	TMap<FString, FString> SpecialPackTitle;

	UPROPERTY(Transient)
	float Discount;

public:
	DEADBYDAYLIGHT_API FStoreSpecialPackCatalogItemMetaData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialPackCatalogItemMetaData) { return 0; }
