#include "StoreSpecialPackItem.h"

FStoreSpecialPackItem::FStoreSpecialPackItem()
{
	this->Type = EStoreSpecialPackItemType::Customization;
	this->CustomizationId = TEXT("");
	this->CharacterId = TEXT("");
	this->TomeId = TEXT("");
	this->Amount = 0;
}
