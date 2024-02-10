#include "CoreStoreCharactersWidget.h"

class UCoreButtonWidget;

void UCoreStoreCharactersWidget::OnPlayMoriClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreStoreCharactersWidget::OnItemUnlockClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreStoreCharactersWidget::OnItemSelectAllClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreStoreCharactersWidget::OnItemSeePackClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreStoreCharactersWidget::OnItemEquipClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreStoreCharactersWidget::OnItemEquipAllClicked(UCoreButtonWidget* buttonTarget)
{

}

UCoreStoreCharactersWidget::UCoreStoreCharactersWidget()
{
	this->_currencyButtonWidgetClass = NULL;
	this->_preConstructedCurrencyButtonCount = 2;
	this->_currencyButtonAlignment = ETextJustify::Right;
	this->SelectedCharacterName = NULL;
	this->PerksToast = NULL;
	this->CurrencyButtonsTitleText = NULL;
	this->CurrencyButtonsVerticalBox = NULL;
	this->EquipButton = NULL;
	this->EquipAllButton = NULL;
	this->SelectAllButton = NULL;
	this->SeePackButton = NULL;
	this->SeePackMessageText = NULL;
	this->PlayMoriButton = NULL;
	this->_currencyButtonList = NULL;
}
