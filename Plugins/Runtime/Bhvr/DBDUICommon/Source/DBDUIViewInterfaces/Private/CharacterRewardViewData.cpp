#include "CharacterRewardViewData.h"

FCharacterRewardViewData::FCharacterRewardViewData()
{
	this->ItemId = NAME_None;
	this->IsOwned = false;
	this->Level = 0;
	this->Prestige = 0;
	this->TooltipData = FCharacterTooltipViewData{};
	this->IsEnabled = false;
}
