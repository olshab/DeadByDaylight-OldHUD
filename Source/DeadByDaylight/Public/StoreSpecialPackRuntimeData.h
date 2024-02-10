#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "StoreSpecialPackRuntimeItem.h"
#include "StoreSpecialPackRuntimeData.generated.h"

USTRUCT()
struct FStoreSpecialPackRuntimeData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString Id;

	UPROPERTY(Transient)
	TMap<FString, FString> TitleByCulture;

	UPROPERTY(Transient)
	TArray<FStoreSpecialPackRuntimeItem> Content;

	UPROPERTY(Transient)
	TMap<ECurrencyType, uint32> OriginalCost;

	UPROPERTY(Transient)
	TMap<ECurrencyType, uint32> DiscountedCost;

	UPROPERTY(Transient)
	float Discount;

	UPROPERTY(Transient)
	bool IsOwned;

	UPROPERTY(Transient)
	FString Image;

	UPROPERTY(Transient)
	FString DLCId;

	UPROPERTY(Transient)
	int32 SortOrder;

public:
	DEADBYDAYLIGHT_API FStoreSpecialPackRuntimeData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialPackRuntimeData) { return 0; }
