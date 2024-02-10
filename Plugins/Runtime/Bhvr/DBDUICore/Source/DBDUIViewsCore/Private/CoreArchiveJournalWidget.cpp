#include "CoreArchiveJournalWidget.h"
#include "UObject/SoftObjectPtr.h"

class UCoreSelectableButtonWidget;
class UCoreInputSwitcherWidget;
class UTexture2D;

void UCoreArchiveJournalWidget::ShowImageViewer()
{

}

void UCoreArchiveJournalWidget::OnVoiceOverPlay()
{

}

void UCoreArchiveJournalWidget::OnVoiceOverAutoPlay(bool autoplay)
{

}

void UCoreArchiveJournalWidget::OnVignetteEntrySelected(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCoreArchiveJournalWidget::OnVignetteCinematicSelected(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCoreArchiveJournalWidget::OnVignetteButtonSelected(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCoreArchiveJournalWidget::OnRightArrowTriggered()
{

}

void UCoreArchiveJournalWidget::OnRewardImageLoaded(TSoftObjectPtr<UTexture2D> loadedTexture, bool success, FText titleText, FText descriptionText, float textureOffset)
{

}

void UCoreArchiveJournalWidget::OnLeftArrowTriggered()
{

}

void UCoreArchiveJournalWidget::OnJournalEntriesUnlocked()
{

}

void UCoreArchiveJournalWidget::OnFirstJournalEntryUnlocked()
{

}

void UCoreArchiveJournalWidget::InitializeArrow(UCoreInputSwitcherWidget* arrowWidget, bool active)
{

}

UCoreArchiveJournalWidget::UCoreArchiveJournalWidget()
{
	this->VignetteButtonContainer = NULL;
	this->VignetteEntryContainer = NULL;
	this->VignetteCinematicsContainer = NULL;
	this->LeftArrowInputSwitcher = NULL;
	this->RightArrowInputSwitcher = NULL;
	this->AreInputsEnabled = true;
	this->DebugRewardImage = NULL;
	this->RewardImageMaxDescriptionLength = 50;
}
