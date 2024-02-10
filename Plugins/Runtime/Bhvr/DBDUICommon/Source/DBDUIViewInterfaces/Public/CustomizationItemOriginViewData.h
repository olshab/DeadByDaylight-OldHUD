#pragma once

#include "CoreMinimal.h"
#include "PriceTagViewData.h"
#include "EOriginWidgetState.h"
#include "CustomizationItemOriginViewData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationItemOriginViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOriginWidgetState State;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> Args;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPriceTagViewData CurrencyData;

public:
	DBDUIVIEWINTERFACES_API FCustomizationItemOriginViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationItemOriginViewData) { return 0; }
