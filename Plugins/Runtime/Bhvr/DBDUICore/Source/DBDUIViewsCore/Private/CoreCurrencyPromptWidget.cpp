#include "CoreCurrencyPromptWidget.h"
#include "PriceTagViewData.h"
#include "ECurrencyType.h"

void UCoreCurrencyPromptWidget::SetCurrencyData(const FPriceTagViewData& currencyData)
{

}

void UCoreCurrencyPromptWidget::SetBackgroundVisible(const bool showBackground) const
{

}

ECurrencyType UCoreCurrencyPromptWidget::GetCurrencyType() const
{
	return ECurrencyType::None;
}

UCoreCurrencyPromptWidget::UCoreCurrencyPromptWidget()
{
	this->PriceTag = NULL;
}
