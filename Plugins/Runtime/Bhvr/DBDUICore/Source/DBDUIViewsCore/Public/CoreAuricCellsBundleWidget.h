#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "AuricCellsBuyActionDelegate.h"
#include "AuricCellsBundleViewData.h"
#include "CoreAuricCellsBundleWidget.generated.h"

class UDBDImage;
class UCoreButtonWidget;
class UCorePremiumCurrencyButtonWidget;
class UPanelWidget;
class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreAuricCellsBundleWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FAuricCellsBuyActionDelegate _buyActionDelegate;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCorePremiumCurrencyButtonWidget* BuyButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* BaseAmountTextBlock;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* AmountTextBlock;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTextBlock;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UPanelWidget* BonusPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* BonusTextBlock;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* InfoTextBlock;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* IconImage;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetupAsReward();

	UFUNCTION(BlueprintCallable)
	void SetData(const FAuricCellsBundleViewData& bundleData);

protected:
	UFUNCTION()
	void OnBuyButtonClicked(UCoreButtonWidget* buttonTarget);

public:
	UCoreAuricCellsBundleWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreAuricCellsBundleWidget) { return 0; }
