#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "ECurrencyType.h"
#include "UObject/SoftObjectPtr.h"
#include "ArchivePassPurchasePopupViewData.generated.h"

class UTexture2D;

UCLASS()
class DBDUIVIEWINTERFACES_API UArchivePassPurchasePopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText AvailabilityDates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> ImageTexture;

	UPROPERTY(BlueprintReadWrite, Transient)
	ECurrencyType CurrencyType;

	UPROPERTY(BlueprintReadWrite, Transient)
	int32 Price;

	UPROPERTY(BlueprintReadWrite, Transient)
	float DiscountPercentage;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool IsAffordable;

public:
	UArchivePassPurchasePopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UArchivePassPurchasePopupViewData) { return 0; }
