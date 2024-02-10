#include "DailyRitualsContainerWidget.h"
#include "DailyRitualViewData.h"

class UUITweenInstance;
class UDailyRitualTileWidget;

void UDailyRitualsContainerWidget::StartAnim()
{

}

void UDailyRitualsContainerWidget::SetData(TArray<FDailyRitualViewData> dailyRitualsData, const bool isAfterTrial)
{

}

void UDailyRitualsContainerWidget::OnRecentlyAssignedDailyRitualFadeInComplete(UDailyRitualTileWidget* dailyRitualTile)
{

}

void UDailyRitualsContainerWidget::OnDelayUntilFadeInSequenceComplete(UUITweenInstance* delayUntilFadeInSequenceTween)
{

}

void UDailyRitualsContainerWidget::OnDailyRitualTileFadeOutComplete(UDailyRitualTileWidget* dailyRitualTile)
{

}

void UDailyRitualsContainerWidget::OnDailyRitualRemoveButtonClicked(const FString& dailyRitualKey)
{

}

void UDailyRitualsContainerWidget::OnDailyRitualClaimButtonClicked(const FString& dailyRitualKey)
{

}

UDailyRitualsContainerWidget::UDailyRitualsContainerWidget()
{
	this->DailyRitualTileWidgetClass = NULL;
	this->OnboardingRitualTileWidgetClass = NULL;
	this->Container = NULL;
	this->NoRitualWarningText = NULL;
	this->TilePadding = 50.000000;
	this->FadeInNoRitualsWarningTextDuration = 0.500000;
	this->AlignmentAnimationDuration = 0.500000;
	this->_alignAssignedRitualsTween = NULL;
}
