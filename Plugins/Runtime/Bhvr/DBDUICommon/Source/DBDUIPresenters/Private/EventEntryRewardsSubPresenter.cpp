#include "EventEntryRewardsSubPresenter.h"

void UEventEntryRewardsSubPresenter::OnRewardGridItemClicked(const int32 selectedIndex)
{

}

void UEventEntryRewardsSubPresenter::OnPreviewAreaItemClicked(const int32 selectedIndex)
{

}

void UEventEntryRewardsSubPresenter::OnInstructionButtonClicked()
{

}

UEventEntryRewardsSubPresenter::UEventEntryRewardsSubPresenter()
{
	this->_tabWidget = NULL;
	this->_rewardsGridData = TArray<UStoreCustomizationItemViewData*>();
	this->_previewAreaRewardsData = TArray<UStoreCustomizationItemViewData*>();
	this->_parentPresenter = NULL;
}
