#include "CoreRitualsBackendData.h"

FCoreRitualsBackendData::FCoreRitualsBackendData()
{
	this->DifficultyThreshold = 0;
	this->DifficultyTolerance = 0.0f;
	this->DifficultyDisplayThreshold = 0;
	this->DifficultyRewardsType = ERewardType::None;
	this->DifficultyRewardsAmount = 0;
	this->DifficultyRewardsId = ECurrencyType::None;
	this->RitualId = TEXT("");
}
