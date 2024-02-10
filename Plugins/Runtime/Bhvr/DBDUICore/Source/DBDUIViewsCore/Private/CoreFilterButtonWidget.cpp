#include "CoreFilterButtonWidget.h"

void UCoreFilterButtonWidget::SetToggledState(bool isToggled)
{

}

bool UCoreFilterButtonWidget::IsToggled() const
{
	return false;
}

UCoreFilterButtonWidget::UCoreFilterButtonWidget()
{
	this->LabelIMG = NULL;
	this->_isFavoriteOption = false;
	this->_isOwnedOption = false;
	this->_itemRarityFilterOption = EItemRarity::Common;
	this->FavoriteTagTexture = NULL;
	this->OwnedTagTexture = NULL;
	this->_isToggled = false;
	this->_defaultToggleState = false;
}
