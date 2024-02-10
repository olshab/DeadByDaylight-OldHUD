#include "CoreAlertsWidget.h"
#include "AlertsViewData.h"
#include "RewardWrapperViewData.h"

class UCoreButtonWidget;
class UAkAudioEvent;

void UCoreAlertsWidget::ShowRewardTooltip(UCoreButtonWidget* rewardWidget)
{

}

void UCoreAlertsWidget::ShowAlertRewards(const FAlertsViewData& alertsViewData)
{

}

void UCoreAlertsWidget::RewardAlertSequenceCompleted()
{

}

void UCoreAlertsWidget::HideRewardTooltip(UCoreButtonWidget* rewardWidget)
{

}

UAkAudioEvent* UCoreAlertsWidget::GetDisplayRewardSound(const FRewardWrapperViewData& rewardData) const
{
	return NULL;
}

void UCoreAlertsWidget::EndRewardDisplayRequested()
{

}

void UCoreAlertsWidget::EndInterSequenceAnimation()
{

}

void UCoreAlertsWidget::EndEndSequenceAnimation()
{

}

void UCoreAlertsWidget::DisplayNextRewardSequence()
{

}

UCoreAlertsWidget::UCoreAlertsWidget()
{
	this->RewardWidgetClass = NULL;
	this->Container = NULL;
	this->BackgroundImage = NULL;
	this->RewardClaimedText = NULL;
	this->NumberRewardsText = NULL;
	this->HorizontalAlignment = ETooltipHorizontalAlignment::Default;
	this->VerticalAlignment = ETooltipVerticalAlignment::Default;
	this->SoundEffectCurrency = NULL;
	this->SoundEffectCommon = NULL;
	this->SoundEffectUncommon = NULL;
	this->SoundEffectRare = NULL;
	this->SoundEffectVeryRare = NULL;
	this->SoundEffectUltraRare = NULL;
	this->SoundEffectLegendary = NULL;
	this->SoundEffectCharacter = NULL;
	this->SoundEffectSpecialEvent = NULL;
	this->SoundEffectProgression = NULL;
	this->SoundEffectDisappear = NULL;
}
