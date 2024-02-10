#include "CoreStoreSpecialsWidget.h"

class UCoreButtonWidget;

void UCoreStoreSpecialsWidget::OnSpecialItemClicked(UCoreButtonWidget* buttonTarget)
{

}

UCoreStoreSpecialsWidget::UCoreStoreSpecialsWidget()
{
	this->_itemWidgetClass = NULL;
	this->_preConstructedItemsCount = 0;
	this->_layoutMask = 0;
	this->_itemScale = 1.000000;
	this->AuricCellSpecialOffer = NULL;
	this->NoAuricCellsTitleTB = NULL;
	this->NoAuricCellsTextTB = NULL;
	this->Container = NULL;
	this->_itemList = NULL;
}
