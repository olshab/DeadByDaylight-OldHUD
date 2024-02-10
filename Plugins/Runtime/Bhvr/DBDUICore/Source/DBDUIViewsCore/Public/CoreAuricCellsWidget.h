#pragma once

#include "CoreMinimal.h"
#include "AuricCellsBuyActionDelegate.h"
#include "CoreBaseUserWidget.h"
#include "AuricCellsViewInterface.h"
#include "AuricCellsBackActionDelegate.h"
#include "CoreAuricCellsWidget.generated.h"

class UCoreAuricCellsContainerWidget;
class UDBDTextBlock;
class UCoreInputSwitcherWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreAuricCellsWidget : public UCoreBaseUserWidget, public IAuricCellsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FAuricCellsBackActionDelegate _backActionDelegate;

	UPROPERTY()
	FAuricCellsBuyActionDelegate _buyActionDelegate;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* BackInputSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreAuricCellsContainerWidget* Container;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTextBlock;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* EmptyBundlesTitleTextBlock;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* EmptyBundlesDescriptionTextBlock;

protected:
	UFUNCTION()
	void OnBuyAction(FName bundleId);

public:
	UCoreAuricCellsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreAuricCellsWidget) { return 0; }
