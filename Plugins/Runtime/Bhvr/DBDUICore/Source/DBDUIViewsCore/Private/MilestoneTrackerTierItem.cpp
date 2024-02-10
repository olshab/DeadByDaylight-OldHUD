#include "MilestoneTrackerTierItem.h"
#include "UObject/SoftObjectPtr.h"
#include "MilestoneTrackerItemViewData.h"

class UMaterialInstance;

void UMilestoneTrackerTierItem::UpdateBackground(const TSoftObjectPtr<UMaterialInstance> background)
{

}

void UMilestoneTrackerTierItem::SetData(const FMilestoneTrackerItemViewData& data)
{

}

void UMilestoneTrackerTierItem::OnBackgroundImageLoadingStarted()
{

}

void UMilestoneTrackerTierItem::OnBackgroundImageLoadingCompleted()
{

}

void UMilestoneTrackerTierItem::Clear() const
{

}

UMilestoneTrackerTierItem::UMilestoneTrackerTierItem()
{
	this->Reward = NULL;
	this->EventPointsWidget = NULL;
	this->BackgroundImage = NULL;
}
