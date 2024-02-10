#include "CustomizationItemOriginViewData.h"

FCustomizationItemOriginViewData::FCustomizationItemOriginViewData()
{
	this->State = EOriginWidgetState::None;
	this->Args = TArray<FText>();
	this->CurrencyData = FPriceTagViewData{};
}
