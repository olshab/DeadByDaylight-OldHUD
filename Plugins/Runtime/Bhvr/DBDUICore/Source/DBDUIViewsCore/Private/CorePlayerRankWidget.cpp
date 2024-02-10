#include "CorePlayerRankWidget.h"
#include "CoreRankWidgetConfiguration.h"

void UCorePlayerRankWidget::SetRankImageAndText(const int32 rankIndex, const bool isKiller)
{

}

FCoreRankWidgetConfiguration UCorePlayerRankWidget::GetConfiguration() const
{
	return FCoreRankWidgetConfiguration{};
}

UCorePlayerRankWidget::UCorePlayerRankWidget()
{
	this->_showTooltipOnHover = true;
	this->LevelBG = NULL;
	this->RankNumberImage = NULL;
}
