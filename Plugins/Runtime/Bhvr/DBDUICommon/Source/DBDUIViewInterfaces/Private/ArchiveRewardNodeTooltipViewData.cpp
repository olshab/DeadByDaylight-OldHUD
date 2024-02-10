#include "ArchiveRewardNodeTooltipViewData.h"

FArchiveRewardNodeTooltipViewData::FArchiveRewardNodeTooltipViewData()
{
	this->RewardType = ERewardType::None;
	this->NodeDebugInfo = TEXT("");
	this->CustomizationTooltipViewData = FCustomizationTooltipViewData{};
	this->CurrencyProgressionTooltipViewData = FCurrencyProgressionTooltipViewData{};
}
