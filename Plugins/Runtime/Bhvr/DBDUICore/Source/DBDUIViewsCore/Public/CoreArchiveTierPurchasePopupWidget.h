#pragma once

#include "CoreMinimal.h"
#include "ArchiveTierPurchasePopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "Styling/SlateColor.h"
#include "ECurrencyType.h"
#include "ConfirmPurchase.h"
#include "CoreArchiveTierPurchasePopupWidget.generated.h"

class UCurveFloat;
class UDBDImage;
class UDBDTextBlock;
class UCoreInputSwitcherWidget;
class UArchiveTierPurchasePopupViewData;
class UDBDRichTextBlock;
class UOverlay;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveTierPurchasePopupWidget : public UCoreGenericPopupWidget, public IArchiveTierPurchasePopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* LessInputSwitcher;

	UPROPERTY(meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* MoreInputSwitcher;

	UPROPERTY(meta=(BindWidgetOptional))
	UDBDRichTextBlock* CurrentQuantityText;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* ImageContainer;

	UPROPERTY(meta=(BindWidgetOptional))
	UOverlay* PriceContainer;

	UPROPERTY(meta=(BindWidgetOptional))
	UDBDTextBlock* PriceText;

	UPROPERTY(meta=(BindWidgetOptional))
	UDBDTextBlock* DiscountText;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _quantityCurve;

	UPROPERTY(EditDefaultsOnly)
	FText _bonusTierStyleName;

	UPROPERTY(EditDefaultsOnly)
	TMap<ECurrencyType, FSlateColor> _currencyTextColors;

	UPROPERTY(EditDefaultsOnly)
	FSlateColor _unaffordablePriceColor;

private:
	UPROPERTY()
	FConfirmPurchase _confirmPurchaseDelegate;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetVisualData(const UArchiveTierPurchasePopupViewData* viewData);

	UFUNCTION(BlueprintImplementableEvent)
	void SetCurrencyIcon(const ECurrencyType currencyType);

private:
	UFUNCTION()
	void OnMoreInputTriggered();

	UFUNCTION()
	void OnLessInputTriggered();

	UFUNCTION()
	void OnConfirmPurchase();

public:
	UCoreArchiveTierPurchasePopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveTierPurchasePopupWidget) { return 0; }
