#pragma once

#include "CoreMinimal.h"
#include "AuricCellsSpecialOtherOptionsActionDelegate.h"
#include "CoreAuricCellsBundleWidget.h"
#include "CoreAuricCellsSpecialOfferWidget.generated.h"

class UDBDTextBlock;
class UCoreKeyListenerButtonWidget;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreAuricCellsSpecialOfferWidget : public UCoreAuricCellsBundleWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FAuricCellsSpecialOtherOptionsActionDelegate _otherOptionsActionDelegate;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreKeyListenerButtonWidget* OtherOptionsButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TimeLeftTextBlock;

protected:
	UFUNCTION()
	void OnOtherOptionsClick(UCoreButtonWidget* selectedButton);

public:
	UCoreAuricCellsSpecialOfferWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreAuricCellsSpecialOfferWidget) { return 0; }
