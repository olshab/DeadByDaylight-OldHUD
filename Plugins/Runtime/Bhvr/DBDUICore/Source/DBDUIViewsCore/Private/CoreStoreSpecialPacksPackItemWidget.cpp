#include "CoreStoreSpecialPacksPackItemWidget.h"

class UStoreSpecialPackViewData;
class UCoreButtonWidget;

void UCoreStoreSpecialPacksPackItemWidget::SetData_Implementation(UStoreSpecialPackViewData* data)
{

}

void UCoreStoreSpecialPacksPackItemWidget::OnCustomizationItemClicked(UCoreButtonWidget* button)
{

}

void UCoreStoreSpecialPacksPackItemWidget::OnCurrencyBuyButtonClicked()
{

}

void UCoreStoreSpecialPacksPackItemWidget::OnCharacterItemClicked(UCoreButtonWidget* button)
{

}

void UCoreStoreSpecialPacksPackItemWidget::OnArchivePassItemClicked(UCoreButtonWidget* button)
{

}

UCoreStoreSpecialPacksPackItemWidget::UCoreStoreSpecialPacksPackItemWidget()
{
	this->TimerText = NULL;
	this->TitleText = NULL;
	this->ArchivePassBox = NULL;
	this->CharactersBox = NULL;
	this->CustomizationsBox = NULL;
	this->CurrencyBuyButton = NULL;
	this->_isExpanded = true;
	this->_initialItemPoolSize = 2;
	this->_characterItemWidgetClass = NULL;
	this->_customizationItemWidgetClass = NULL;
	this->_archivePassItemWidgetClass = NULL;
	this->_data = NULL;
	this->_characterList = NULL;
	this->_customizationList = NULL;
	this->_archivePassItem = NULL;
}
