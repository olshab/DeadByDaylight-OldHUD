#include "MilestoneTrackerItemViewData.h"

FMilestoneTrackerItemViewData::FMilestoneTrackerItemViewData()
{
	this->EventPoints = 0;
	this->State = EMilestoneTrackerItemState::Unlocked;
	this->RewardData = NULL;
}
