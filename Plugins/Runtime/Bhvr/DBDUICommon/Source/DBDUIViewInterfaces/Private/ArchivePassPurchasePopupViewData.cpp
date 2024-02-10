#include "ArchivePassPurchasePopupViewData.h"

UArchivePassPurchasePopupViewData::UArchivePassPurchasePopupViewData()
{
	this->AvailabilityDates = FText::GetEmpty();
	this->ImageTexture = NULL;
	this->CurrencyType = ECurrencyType::None;
	this->Price = 0;
	this->DiscountPercentage = 0.000000;
	this->IsAffordable = false;
}
