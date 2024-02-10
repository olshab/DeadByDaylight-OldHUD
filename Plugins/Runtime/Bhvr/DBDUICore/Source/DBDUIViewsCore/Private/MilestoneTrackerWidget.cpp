#include "MilestoneTrackerWidget.h"
#include "MilestoneTrackerEventBasedSkinViewData.h"
#include "MilestoneTrackerViewData.h"

class UCoreButtonWidget;

void UMilestoneTrackerWidget::SetVisuals(const FMilestoneTrackerEventBasedSkinViewData& viewData)
{

}

void UMilestoneTrackerWidget::SetData(const FMilestoneTrackerViewData& viewData)
{

}

void UMilestoneTrackerWidget::SelectMilestoneTrackerItem(FName itemId)
{

}

void UMilestoneTrackerWidget::OnRewardItemClicked(UCoreButtonWidget* buttonTarget)
{

}

void UMilestoneTrackerWidget::DeselectMilestoneRewards()
{

}

UMilestoneTrackerWidget::UMilestoneTrackerWidget()
{
	this->Title = NULL;
	this->MilestonePointsText = NULL;
	this->UserMilestonePointsWidget = NULL;
	this->RewardsGrid = NULL;
	this->Background = NULL;
	this->_milestoneTrackerTierItemClass = NULL;
	this->_maxTierItems = 5;
	this->_tierItemPool = TArray<UMilestoneTrackerTierItem*>();
}
