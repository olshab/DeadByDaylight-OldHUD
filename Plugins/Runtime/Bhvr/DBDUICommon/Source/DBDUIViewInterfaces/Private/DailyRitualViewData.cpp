#include "DailyRitualViewData.h"

FDailyRitualViewData::FDailyRitualViewData()
{
	this->Key = TEXT("");
	this->Title = TEXT("");
	this->Description = TEXT("");
	this->IconTexture = NULL;
	this->RitualState = EDailyRitualState::Assigned;
	this->IsNew = false;
	this->TextProgress = 0;
	this->TextThreshold = 0;
	this->BarProgress = 0.0f;
	this->BarThreshold = 0.0f;
	this->BloodpointsReward = 0;
}
