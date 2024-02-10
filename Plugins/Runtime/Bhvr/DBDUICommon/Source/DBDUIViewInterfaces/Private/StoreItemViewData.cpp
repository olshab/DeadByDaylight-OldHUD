#include "StoreItemViewData.h"

bool UStoreItemViewData::GetIsBuyable() const
{
	return false;
}

UStoreItemViewData::UStoreItemViewData()
{
	this->PriceTagData = TArray<FPriceTagViewData>();
	this->IsInStore = false;
	this->IsNewInStore = false;
	this->LimitedTimeText = TEXT("");
	this->DiscountTimeText = TEXT("");
	this->DlcId = TEXT("");
	this->DlcTitle = FText::GetEmpty();
	this->PackId = TEXT("");
	this->PackTitle = FText::GetEmpty();
	this->IsDlcValid = false;
	this->IsDlcPurchasable = false;
}
