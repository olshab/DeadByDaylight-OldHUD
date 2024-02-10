#include "CoreSortButtonWidget.h"
#include "ESortingOrder.h"
#include "ESortingOption.h"

class UCoreButtonWidget;

ESortingOrder UCoreSortButtonWidget::ToggleSortingOrder()
{
	return ESortingOrder::Descending;
}

void UCoreSortButtonWidget::OnSortingOptionClick(UCoreButtonWidget* buttonTarget)
{

}

bool UCoreSortButtonWidget::IsOptionEnabled(ESortingOption option) const
{
	return false;
}

UCoreSortButtonWidget::UCoreSortButtonWidget()
{
	this->_sortingOptions = 0;
	this->SortingOrderButton = NULL;
	this->SortingOptionButton = NULL;
}
