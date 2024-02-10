#pragma once

#include "CoreMinimal.h"
#include "EStoreSpecialPackItemType.h"
#include "ECurrencyType.h"
#include "StoreSpecialPackRuntimeItem.generated.h"

USTRUCT()
struct FStoreSpecialPackRuntimeItem
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString Id;

	UPROPERTY(Transient)
	EStoreSpecialPackItemType Type;

	UPROPERTY(Transient)
	int32 Amount;

	UPROPERTY(Transient)
	TMap<ECurrencyType, uint32> OriginalCost;

	UPROPERTY(Transient)
	bool IsOwned;

public:
	DEADBYDAYLIGHT_API FStoreSpecialPackRuntimeItem();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialPackRuntimeItem) { return 0; }
