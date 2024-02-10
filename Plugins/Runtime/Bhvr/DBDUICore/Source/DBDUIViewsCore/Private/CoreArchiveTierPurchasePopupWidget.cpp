#include "CoreArchiveTierPurchasePopupWidget.h"

void UCoreArchiveTierPurchasePopupWidget::OnMoreInputTriggered()
{

}

void UCoreArchiveTierPurchasePopupWidget::OnLessInputTriggered()
{

}

void UCoreArchiveTierPurchasePopupWidget::OnConfirmPurchase()
{

}

UCoreArchiveTierPurchasePopupWidget::UCoreArchiveTierPurchasePopupWidget()
{
	this->LessInputSwitcher = NULL;
	this->MoreInputSwitcher = NULL;
	this->CurrentQuantityText = NULL;
	this->ImageContainer = NULL;
	this->PriceContainer = NULL;
	this->PriceText = NULL;
	this->DiscountText = NULL;
	this->_quantityCurve = NULL;
	this->_bonusTierStyleName = FText::GetEmpty();
	this->_currencyTextColors = TMap<ECurrencyType, FSlateColor>();
}
