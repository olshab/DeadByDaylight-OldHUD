#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "ECurrencyType.h"
#include "CurrencyConversionPopupViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UCurrencyConversionPopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Transient)
	FText EventName;

	UPROPERTY(BlueprintReadWrite, Transient)
	ECurrencyType FromCurrencyType;

	UPROPERTY(BlueprintReadWrite, Transient)
	int32 FromCurrencyAmount;

	UPROPERTY(BlueprintReadWrite, Transient)
	ECurrencyType ToCurrencyType;

	UPROPERTY(BlueprintReadWrite, Transient)
	int32 ToCurrencyAmount;

public:
	UCurrencyConversionPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UCurrencyConversionPopupViewData) { return 0; }
