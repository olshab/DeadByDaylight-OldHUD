#pragma once

#include "CoreMinimal.h"
#include "EventInfoViewInterface.h"
#include "CoreTabContentWidget.h"
#include "EventEntryPopupSkinUIData.h"
#include "EventInfoTabArchivesButtonClickedDelegate.h"
#include "EventEntryEventTabWidget.generated.h"

class UEventTabViewData;
class UDBDImage;
class UDBDScrollBox;
class UCoreInputSwitcherWidget;
class UDBDRichTextBlock;

UCLASS(EditInlineNew)
class UEventEntryEventTabWidget : public UCoreTabContentWidget, public IEventInfoViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	UEventTabViewData* _viewData;

	UPROPERTY(BlueprintReadOnly)
	FEventEntryPopupSkinUIData _skinData;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* ImageContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDScrollBox* ScrollBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* MessageText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* AdditionalInformationText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* ArchivesButton;

	UPROPERTY(BlueprintReadOnly)
	FText _scrollLabelText;

	UPROPERTY(BlueprintAssignable)
	FEventInfoTabArchivesButtonClickedDelegate _onArchivesButtonClicked;

	UPROPERTY(BlueprintReadOnly)
	bool _disableArchivesButton;

protected:
	UFUNCTION()
	void OnArchivesButtonClicked();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void EnableInputs();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DisableInputs();

public:
	UEventEntryEventTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryEventTabWidget) { return 0; }
