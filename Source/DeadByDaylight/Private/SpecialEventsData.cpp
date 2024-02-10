#include "SpecialEventsData.h"

FSpecialEventsData::FSpecialEventsData()
{
	this->EventId = TEXT("");
	this->LteData = FLTEData{};
	this->LteData_IsSet = false;
	this->MiscRewards = TArray<FSpecialEventMiscRewards>();
	this->MiscRewards_IsSet = false;
	this->OwnerRewards = TArray<FRewardResponseItem>();
	this->OwnerRewards_IsSet = false;
	this->ScoreEventRewards = TArray<FScoreEventRewards>();
	this->ScoreEventRewards_IsSet = false;
	this->MilestoneRewards = TArray<FSpecialEventMilestoneRewards>();
	this->MilestoneRewards_IsSet = false;
	this->EventPeriods = TArray<FEventPeriod>();
	this->EventPeriods_IsSet = false;
}
