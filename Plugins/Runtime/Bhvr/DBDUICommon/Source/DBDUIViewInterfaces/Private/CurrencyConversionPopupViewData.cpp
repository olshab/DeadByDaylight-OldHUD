#include "CurrencyConversionPopupViewData.h"

UCurrencyConversionPopupViewData::UCurrencyConversionPopupViewData()
{
	this->EventName = FText::GetEmpty();
	this->FromCurrencyType = ECurrencyType::None;
	this->FromCurrencyAmount = 0;
	this->ToCurrencyType = ECurrencyType::None;
	this->ToCurrencyAmount = 0;
}
