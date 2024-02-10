#include "CurrencyProgressionRewardViewData.h"

FCurrencyProgressionRewardViewData::FCurrencyProgressionRewardViewData()
{
	this->CurrencyType = ECurrencyType::None;
	this->ProgressionType = EProgressionType::None;
	this->Amount = 0;
	this->IsAffordable = false;
	this->RewardBackgroundMaterial = NULL;
	this->TooltipData = FCurrencyProgressionTooltipViewData{};
}
