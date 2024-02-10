#include "ArchiveTierPurchasePopupViewData.h"

UArchiveTierPurchasePopupViewData::UArchiveTierPurchasePopupViewData()
{
	this->ImageTexture = NULL;
	this->MaxTiers = 0;
	this->CurrentTier = 0;
	this->CurrencyType = ECurrencyType::None;
	this->UnitPrice = 0;
	this->DiscountPercentage = 0.000000;
	this->IsAffordable = false;
	this->CurrentWalletAmount = 0;
	this->InitialQuantity = 1;
	this->FirstBonusTier = -1;
	this->LastBonusTier = -1;
	this->IsBonusTier = false;
}
