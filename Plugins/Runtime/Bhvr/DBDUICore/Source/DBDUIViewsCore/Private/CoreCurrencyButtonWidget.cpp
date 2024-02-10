#include "CoreCurrencyButtonWidget.h"
#include "PriceTagViewData.h"
#include "ECurrencyType.h"

void UCoreCurrencyButtonWidget::SetCurrencyData_Implementation(const FPriceTagViewData& currencyData)
{

}

void UCoreCurrencyButtonWidget::SetBackgroundVisible(const bool showBackground) const
{

}

ECurrencyType UCoreCurrencyButtonWidget::GetCurrencyType() const
{
	return ECurrencyType::None;
}

UCoreCurrencyButtonWidget::UCoreCurrencyButtonWidget()
{
	this->PriceTag = NULL;
	this->_chargeToUnlockCurve = NULL;
	this->_chargeToUnlockDuration = 0.000000;
}
