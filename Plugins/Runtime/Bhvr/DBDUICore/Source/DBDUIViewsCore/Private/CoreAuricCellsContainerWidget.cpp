#include "CoreAuricCellsContainerWidget.h"
#include "AuricCellsBundleViewData.h"

void UCoreAuricCellsContainerWidget::SetData(const TArray<FAuricCellsBundleViewData>& bundlesData)
{

}

void UCoreAuricCellsContainerWidget::OnBuyAction(FName bundleId)
{

}

UCoreAuricCellsContainerWidget::UCoreAuricCellsContainerWidget()
{
	this->_tileWidgetClass = NULL;
	this->Container = NULL;
	this->_tiles = TArray<UCoreAuricCellsBundleWidget*>();
}
