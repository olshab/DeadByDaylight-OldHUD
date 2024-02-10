#pragma once

#include "CoreMinimal.h"
#include "FearMarketPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "CoreFearMarketWidget.generated.h"

class UCoreMenuPerkWidget;
class UHorizontalBox;
class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreFearMarketWidget : public UCoreGenericPopupWidget, public IFearMarketPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* MenuPerk;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* BloodpointsRewardContainer;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* BloodpointsValueTB;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* CostTextTB;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* AvailableTextTB;

public:
	UCoreFearMarketWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreFearMarketWidget) { return 0; }
