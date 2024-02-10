#include "LoadoutTooltipWidget.h"
#include "LoadoutTooltipData.h"

void ULoadoutTooltipWidget::SetTooltipData(const FLoadoutTooltipData& tooltipViewData)
{

}

void ULoadoutTooltipWidget::Reset()
{

}

ULoadoutTooltipWidget::ULoadoutTooltipWidget()
{
	this->TooltipTitle = NULL;
	this->ToolTipDescriptionRTB = NULL;
	this->SpecialEventTitle = NULL;
	this->SpecialEventDescription = NULL;
	this->UnlockInstructionText = NULL;
	this->RarityTypeSubtitle = NULL;
	this->RarityBG = NULL;
	this->EventHeader = NULL;
	this->Line_1 = NULL;
	this->LevelIcon = NULL;
	this->ToolTipWarning = NULL;
}
