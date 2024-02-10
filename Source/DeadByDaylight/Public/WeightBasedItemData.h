#pragma once

#include "CoreMinimal.h"
#include "ItemIdDropdown.h"
#include "WeightBasedItemData.generated.h"

USTRUCT()
struct FWeightBasedItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FItemIdDropdown ItemId;

	UPROPERTY(EditAnywhere)
	float Weight;

public:
	DEADBYDAYLIGHT_API FWeightBasedItemData();
};

FORCEINLINE uint32 GetTypeHash(const FWeightBasedItemData) { return 0; }
