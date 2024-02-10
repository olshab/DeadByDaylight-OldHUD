#pragma once

#include "CoreMinimal.h"
#include "CoreKeyListenerInputPromptWidget.h"
#include "PriceTagViewData.h"
#include "ECurrencyType.h"
#include "CoreCurrencyPromptWidget.generated.h"

class UCorePriceTagWidget;

UCLASS(EditInlineNew)
class UCoreCurrencyPromptWidget : public UCoreKeyListenerInputPromptWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCorePriceTagWidget* PriceTag;

public:
	UFUNCTION(BlueprintCallable)
	void SetCurrencyData(const FPriceTagViewData& currencyData);

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void SetBackgroundVisible(const bool showBackground) const;

	UFUNCTION(BlueprintPure)
	ECurrencyType GetCurrencyType() const;

public:
	UCoreCurrencyPromptWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCurrencyPromptWidget) { return 0; }
