#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "PriceTagViewData.generated.h"

USTRUCT(BlueprintType)
struct FPriceTagViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Amount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 DiscountValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsAffordable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool DisplayDiscountAsOriginalPrice;

public:
	DBDUIVIEWINTERFACES_API FPriceTagViewData();
};

FORCEINLINE uint32 GetTypeHash(const FPriceTagViewData) { return 0; }
