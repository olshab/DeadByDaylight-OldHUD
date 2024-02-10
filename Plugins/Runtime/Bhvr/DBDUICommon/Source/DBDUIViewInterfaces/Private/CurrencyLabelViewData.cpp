#include "CurrencyLabelViewData.h"

FCurrencyLabelViewData::FCurrencyLabelViewData()
{
	this->Type = ECurrencyType::None;
	this->Icon = NULL;
	this->Amount = 0;
	this->PlayBonusAnimation = false;
	this->IsClickable = false;
	this->TooltipData = FCurrencyProgressionTooltipViewData{};
}
