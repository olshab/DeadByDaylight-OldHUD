#pragma once

#include "CoreMinimal.h"
#include "CoreInputSwitcherWidget.h"
#include "PriceTagViewData.h"
#include "ECurrencyType.h"
#include "CoreCurrencySwitcherWidget.generated.h"

UCLASS(EditInlineNew)
class UCoreCurrencySwitcherWidget : public UCoreInputSwitcherWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	void SetCurrencyData(const FPriceTagViewData& currencyData) const;

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void SetBackgroundVisible(const bool showBackground) const;

	UFUNCTION(BlueprintPure)
	ECurrencyType GetCurrencyType() const;

public:
	UCoreCurrencySwitcherWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCurrencySwitcherWidget) { return 0; }
