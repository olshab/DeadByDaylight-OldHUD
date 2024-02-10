#include "CoreMenuAddonWidget.h"
#include "LoadoutTooltipData.h"

class UMenuAddonViewData;

void UCoreMenuAddonWidget::SetMenuAddonTooltipData(const FLoadoutTooltipData& tooltipData)
{

}

void UCoreMenuAddonWidget::SetMenuAddonData(const UMenuAddonViewData* data)
{

}

void UCoreMenuAddonWidget::SetAddonDisabled(bool isParentAvailable)
{

}

FText UCoreMenuAddonWidget::GetWidgetParentDisplayName()
{
	return FText::GetEmpty();
}

UCoreMenuAddonWidget::UCoreMenuAddonWidget()
{
	this->DisabledState = NULL;
	this->_addonInventoryScale = 0.000000;
}
