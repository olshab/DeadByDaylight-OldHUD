#include "SeasonEndRankRewardsPopupViewData.h"

USeasonEndRankRewardsPopupViewData::USeasonEndRankRewardsPopupViewData()
{
	this->OldKillerRank = 0;
	this->OldSurvivorRank = 0;
	this->SurvivorRewards = TArray<FRewardWrapperViewData>();
	this->KillerRewards = TArray<FRewardWrapperViewData>();
}
