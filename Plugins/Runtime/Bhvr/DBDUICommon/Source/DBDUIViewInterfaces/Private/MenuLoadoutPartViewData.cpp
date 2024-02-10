#include "MenuLoadoutPartViewData.h"

UMenuLoadoutPartViewData::UMenuLoadoutPartViewData()
{
	this->ItemId = NAME_None;
	this->IconTexture = NULL;
	this->Rarity = EItemRarity::Common;
	this->StackCount = 0;
	this->ParentDisplayName = FText::GetEmpty();
	this->IsLocked = false;
	this->Availability = EItemAvailability::Available;
	this->IsKillSwitchEnabled = false;
}
