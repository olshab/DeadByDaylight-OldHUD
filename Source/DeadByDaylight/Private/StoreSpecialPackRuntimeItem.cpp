#include "StoreSpecialPackRuntimeItem.h"

FStoreSpecialPackRuntimeItem::FStoreSpecialPackRuntimeItem()
{
	this->Id = TEXT("");
	this->Type = EStoreSpecialPackItemType::Customization;
	this->Amount = 0;
	this->OriginalCost = TMap<ECurrencyType, uint32>();
	this->IsOwned = false;
}
