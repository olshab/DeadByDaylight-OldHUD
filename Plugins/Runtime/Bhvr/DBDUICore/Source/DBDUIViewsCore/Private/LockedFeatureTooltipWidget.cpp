#include "LockedFeatureTooltipWidget.h"
#include "LockedFeatureTooltipViewData.h"

void ULockedFeatureTooltipWidget::SetTooltipData_Implementation(const FLockedFeatureTooltipViewData& viewData)
{

}

ULockedFeatureTooltipWidget::ULockedFeatureTooltipWidget()
{
	this->_tooltipMargins = TMap<ELockedElementType, FMargin>();
	this->TitleTB = NULL;
	this->ContentTB = NULL;
	this->ProgressTB = NULL;
}
