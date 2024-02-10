#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "PriceTagViewData.h"
#include "ECurrencyType.h"
#include "CorePriceTagWidget.generated.h"

class UDBDImage;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePriceTagWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite)
	bool _highlightInsufficientCurrency;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* CurrencyIcon;

public:
	UFUNCTION(BlueprintCallable)
	void SetHighlightInsufficientCurrency(const bool highlight);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FPriceTagViewData& viewData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetCurrencyIcon(ECurrencyType currencyType);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBackgroundVisible(const bool showBackground);

public:
	UCorePriceTagWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePriceTagWidget) { return 0; }
