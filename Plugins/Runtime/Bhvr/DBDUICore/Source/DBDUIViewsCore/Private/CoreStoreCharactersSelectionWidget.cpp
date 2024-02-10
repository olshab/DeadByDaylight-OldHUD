#include "CoreStoreCharactersSelectionWidget.h"

class UCoreSelectableButtonWidget;

void UCoreStoreCharactersSelectionWidget::OnCharacterSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected)
{

}

UCoreStoreCharactersSelectionWidget::UCoreStoreCharactersSelectionWidget()
{
	this->_itemWidgetClass = NULL;
	this->_numberOfColumns = 1;
	this->_itemScale = 1.000000;
	this->_layoutMask = 0;
	this->Scroll = NULL;
	this->Container = NULL;
	this->FiltersWidget = NULL;
	this->_allCharacterItems = TArray<UCoreStoreCharacterItemWidget*>();
	this->_preConstructedItemsCount = 40;
	this->_selectedItem = NULL;
	this->_characterList = NULL;
}
