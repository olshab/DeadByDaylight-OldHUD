#include "CoreStoreChapterPackItemWidget.h"

class UStoreChapterPackViewData;
class UCoreButtonWidget;

void UCoreStoreChapterPackItemWidget::SetData_Implementation(UStoreChapterPackViewData* data)
{

}

void UCoreStoreChapterPackItemWidget::OnRedirectButtonClicked(UCoreButtonWidget* button)
{

}

void UCoreStoreChapterPackItemWidget::OnPremiumBuyButtonClicked(UCoreButtonWidget* button)
{

}

void UCoreStoreChapterPackItemWidget::OnCustomizationClicked(UCoreButtonWidget* button)
{

}

void UCoreStoreChapterPackItemWidget::OnCharacterClicked(UCoreButtonWidget* button)
{

}

UCoreStoreChapterPackItemWidget::UCoreStoreChapterPackItemWidget()
{
	this->TitleText = NULL;
	this->CharactersBox = NULL;
	this->CustomizationsBox = NULL;
	this->PremiumBuyButton = NULL;
	this->RedirectButton = NULL;
	this->_isExpanded = true;
	this->_initialItemPoolSize = 2;
	this->_characterItemWidgetClass = NULL;
	this->_customizationItemWidgetClass = NULL;
	this->_data = NULL;
	this->_characterList = NULL;
	this->_customizationList = NULL;
}
