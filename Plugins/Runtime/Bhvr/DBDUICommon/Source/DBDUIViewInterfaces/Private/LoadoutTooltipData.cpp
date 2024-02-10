#include "LoadoutTooltipData.h"

FLoadoutTooltipData::FLoadoutTooltipData()
{
	this->ItemId = NAME_None;
	this->DisplayName = FText::GetEmpty();
	this->ParentDisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->Level = 0;
	this->Rarity = EItemRarity::Common;
	this->IsLocked = false;
	this->EventName = FText::GetEmpty();
	this->EventId = TEXT("");
	this->IsPastEvent = false;
	this->ItemType = EInventoryItemType::None;
	this->Availability = EItemAvailability::Available;
	this->EventBannerLabel = TEXT("");
}
