#pragma once

#include "CoreMinimal.h"
#include "StoreCollectionMediaData.generated.h"

USTRUCT()
struct FStoreCollectionMediaData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString Path;

public:
	DEADBYDAYLIGHT_API FStoreCollectionMediaData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCollectionMediaData) { return 0; }
