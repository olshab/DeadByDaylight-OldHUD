#pragma once

#include "CoreMinimal.h"
#include "ArchiveImageViewerViewInterface.h"
#include "ImageViewerBackActionDelegate.h"
#include "ImageViewerTextVisibilityActionDelegate.h"
#include "CoreTabContentWidget.h"
#include "ImageViewerVoiceOverPlayed.h"
#include "ArchivesVignetteEntryViewData.h"
#include "ImageViewerVoiceOverAutoplay.h"
#include "CoreArchiveJournalImageViewerWidget.generated.h"

class UCoreInputSwitcherWidget;

UCLASS(EditInlineNew)
class UCoreArchiveJournalImageViewerWidget : public UCoreTabContentWidget, public IArchiveImageViewerViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Export)
	UCoreInputSwitcherWidget* BackInputSwitcher;

	UPROPERTY(BlueprintReadWrite, Export)
	UCoreInputSwitcherWidget* TextVisibilityInputSwitcher;

private:
	UPROPERTY()
	FImageViewerBackActionDelegate _backActionDelegate;

	UPROPERTY()
	FImageViewerTextVisibilityActionDelegate _imageViewerTextVisibilityActionDelegate;

	UPROPERTY()
	FImageViewerVoiceOverPlayed _imageViewerVoiceOverPlayedDelegate;

	UPROPERTY()
	FImageViewerVoiceOverAutoplay _imageViewerVoiceOverAutoplayDelegate;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVoiceOverText(const FText& playVoiceOverText, const FText& stopVoiceOverText, const FText& autoplayVoiceOverText);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetTextVisibilityInputText(const FText& displayText, const FText& hideText);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetScrollData(const FText& journalEntryScrollPromptText);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FArchivesVignetteEntryViewData& data, const bool hasTitle, const bool hasDescription);

	UFUNCTION(BlueprintCallable)
	void OnVoiceOverPlay();

	UFUNCTION(BlueprintCallable)
	void OnVoiceOverAutoPlay(bool autoplay);

	UFUNCTION(BlueprintCallable)
	void OnTextVisibilityChanged();

public:
	UCoreArchiveJournalImageViewerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveJournalImageViewerWidget) { return 0; }
