#pragma once

#include "CoreMinimal.h"
#include "StoreSpecialPackCatalogActivationData.generated.h"

USTRUCT()
struct FStoreSpecialPackCatalogActivationData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString Type;

public:
	DEADBYDAYLIGHT_API FStoreSpecialPackCatalogActivationData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialPackCatalogActivationData) { return 0; }
