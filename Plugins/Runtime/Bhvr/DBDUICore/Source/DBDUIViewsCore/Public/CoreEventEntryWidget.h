#pragma once

#include "CoreMinimal.h"
#include "EventEntryViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "EventEntryTabSelectedDelegate.h"
#include "EventEntryPopupSkinUIData.h"
#include "EventEntryBackActionDelegate.h"
#include "CoreEventEntryWidget.generated.h"

class UEventEntryViewData;
class UCoreTabContainerWidget;
class UDataTable;
class UDBDImage;
class UCoreInputSwitcherWidget;
class UMilestoneTrackerWidget;
class UDBDTextBlock;
class UCoreKeyListenerInputPromptWidget;
class URichTextBlock;
class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreEventEntryWidget : public UCoreBaseUserWidget, public IEventEntryViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	UEventEntryViewData* _viewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	UDataTable* _eventSkinDataTable;

	UPROPERTY(BlueprintReadOnly)
	FEventEntryPopupSkinUIData _skinData;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* TitleBanner;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* TitleImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* EventDateText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreTabContainerWidget* TabsContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UMilestoneTrackerWidget* MilestoneTracker;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreKeyListenerInputPromptWidget* ScrollPrompt;

	UPROPERTY(BlueprintAssignable)
	FEventEntryTabSelectedDelegate _eventEntryTabSelectedEvent;

	UPROPERTY()
	FEventEntryBackActionDelegate _backActionDelegate;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* RegressionButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	URichTextBlock* TitleText;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetUiTakeoverActive(bool isActive);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetTabsVisuals();

	UFUNCTION()
	void OnTabSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnShow();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLeave();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnEnter();

	UFUNCTION(BlueprintCallable)
	void OnBackAction();

public:
	UCoreEventEntryWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreEventEntryWidget) { return 0; }
