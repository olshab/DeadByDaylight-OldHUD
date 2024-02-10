#pragma once

#include "CoreMinimal.h"
#include "VignetteEntrySelected.h"
#include "ArchiveJournalViewInterface.h"
#include "CoreTabContentWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "VignetteVoiceOverPlayed.h"
#include "VignetteSelected.h"
#include "VignetteCinematicPlayed.h"
#include "VignetteVoiceOverAutoplay.h"
#include "VignetteShowImageViewer.h"
#include "CoreArchiveJournalWidget.generated.h"

class UTexture2D;
class UCoreArchiveVignetteButtonContainerWidget;
class UCoreArchiveVignetteEntryContainerWidget;
class UCoreInputSwitcherWidget;
class UCoreArchiveVignetteCinematicContainerWidget;
class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveJournalWidget : public UCoreTabContentWidget, public IArchiveJournalViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreArchiveVignetteButtonContainerWidget* VignetteButtonContainer;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreArchiveVignetteEntryContainerWidget* VignetteEntryContainer;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreArchiveVignetteCinematicContainerWidget* VignetteCinematicsContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* LeftArrowInputSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* RightArrowInputSwitcher;

	UPROPERTY(BlueprintReadOnly)
	bool AreInputsEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> DebugRewardImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 RewardImageMaxDescriptionLength;

private:
	UPROPERTY()
	FVignetteSelected _vignetteSelectedDelegate;

	UPROPERTY()
	FVignetteEntrySelected _vignetteEntrySelectedDelegate;

	UPROPERTY()
	FVignetteCinematicPlayed _vignetteCinematicPlayedDelegate;

	UPROPERTY()
	FVignetteVoiceOverPlayed _vignetteVoiceOverPlayedDelegate;

	UPROPERTY()
	FVignetteVoiceOverAutoplay _vignetteVoiceOverAutoplayDelegate;

	UPROPERTY()
	FVignetteShowImageViewer _vignetteShowImageViewerDelegate;

public:
	UFUNCTION(BlueprintCallable)
	void ShowImageViewer();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVoiceOverText(const FText& playVoiceOverText, const FText& stopVoiceOverText, const FText& autoplayVoiceOverText);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVoiceOverButtonsVisibility(const bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVignetteText(const FText& titleText, const FText& subtitleText);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetTopFogOffset(bool hasTitle, bool hasDescription);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetEntryText(const FText& titleText, const FText& descriptionText);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetEntryImage(const FText& titleText, const FText& descriptionText, const TSoftObjectPtr<UTexture2D>& rewardImage, float textureOffset);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBottomFogOffset(bool hasAudio);

	UFUNCTION(BlueprintCallable)
	void OnVoiceOverPlay();

	UFUNCTION(BlueprintCallable)
	void OnVoiceOverAutoPlay(bool autoplay);

	UFUNCTION()
	void OnVignetteEntrySelected(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION()
	void OnVignetteCinematicSelected(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION()
	void OnVignetteButtonSelected(UCoreSelectableButtonWidget* selectedButton);

private:
	UFUNCTION()
	void OnRightArrowTriggered();

	UFUNCTION()
	void OnRewardImageLoaded(TSoftObjectPtr<UTexture2D> loadedTexture, bool success, FText titleText, FText descriptionText, float textureOffset);

	UFUNCTION()
	void OnLeftArrowTriggered();

	UFUNCTION()
	void OnJournalEntriesUnlocked();

	UFUNCTION()
	void OnFirstJournalEntryUnlocked();

	UFUNCTION()
	void InitializeArrow(UCoreInputSwitcherWidget* arrowWidget, bool active);

public:
	UCoreArchiveJournalWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveJournalWidget) { return 0; }
