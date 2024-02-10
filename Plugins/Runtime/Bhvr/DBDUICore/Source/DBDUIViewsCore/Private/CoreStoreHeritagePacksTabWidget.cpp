#include "CoreStoreHeritagePacksTabWidget.h"

void UCoreStoreHeritagePacksTabWidget::OnPackBuyButtonClicked(const FString& packId)
{

}

UCoreStoreHeritagePacksTabWidget::UCoreStoreHeritagePacksTabWidget()
{
	this->_preConstructedItemsCount = 5;
	this->_itemWidgetClass = NULL;
	this->Content = NULL;
	this->_itemList = NULL;
}
