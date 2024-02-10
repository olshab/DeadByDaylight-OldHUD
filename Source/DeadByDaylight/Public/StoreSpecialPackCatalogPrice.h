#pragma once

#include "CoreMinimal.h"
#include "StoreSpecialPackCatalogPrice.generated.h"

USTRUCT()
struct FStoreSpecialPackCatalogPrice
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString CurrencyId;

	UPROPERTY(Transient)
	uint32 Price;

public:
	DEADBYDAYLIGHT_API FStoreSpecialPackCatalogPrice();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialPackCatalogPrice) { return 0; }
