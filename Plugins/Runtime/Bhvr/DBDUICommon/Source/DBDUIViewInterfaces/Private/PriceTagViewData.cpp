#include "PriceTagViewData.h"

FPriceTagViewData::FPriceTagViewData()
{
	this->Type = ECurrencyType::None;
	this->Amount = 0;
	this->DiscountValue = 0;
	this->IsAffordable = false;
	this->DisplayDiscountAsOriginalPrice = false;
}
