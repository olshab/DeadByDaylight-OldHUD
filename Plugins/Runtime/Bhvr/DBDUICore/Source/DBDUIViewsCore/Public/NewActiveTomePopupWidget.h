#pragma once

#include "CoreMinimal.h"
#include "NewActiveTomePopupViewInterface.h"
#include "NewActiveTomePopupButtonClicked.h"
#include "CoreGenericPopupWidget.h"
#include "NewActiveTomePopupWidget.generated.h"

class UDBDTextBlock;
class UCoreInputSwitcherWidget;
class UDBDImage;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UNewActiveTomePopupWidget : public UCoreGenericPopupWidget, public INewActiveTomePopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* BgImageContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* RiftTimeLabel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TomeTitle;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TomeDescription;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* TomeButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* RiftTitle;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* RiftDescription;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* RiftButton;

	UPROPERTY()
	FNewActiveTomePopupButtonClicked _currentTomeButtonClickedDelegate;

	UPROPERTY()
	FNewActiveTomePopupButtonClicked _riftButtonClickedDelegate;

private:
	UFUNCTION(BlueprintCallable)
	void OnRiftButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnCurrentTomeButtonClicked();

public:
	UNewActiveTomePopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UNewActiveTomePopupWidget) { return 0; }
