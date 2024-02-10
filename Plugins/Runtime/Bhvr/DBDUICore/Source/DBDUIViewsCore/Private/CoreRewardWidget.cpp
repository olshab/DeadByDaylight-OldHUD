#include "CoreRewardWidget.h"
#include "RewardViewData.h"

void UCoreRewardWidget::SetRewardScale(float scale)
{

}

void UCoreRewardWidget::SetRewardData_Implementation(const FRewardViewData& rewardData)
{

}

void UCoreRewardWidget::SetIsLocked(bool isLocked, bool useAnimation)
{

}

UCoreRewardWidget::UCoreRewardWidget()
{
	this->RewardIcon = NULL;
	this->LayoutScale = NULL;
	this->LockedOverlay = NULL;
	this->OnHoverBorder = NULL;
}
