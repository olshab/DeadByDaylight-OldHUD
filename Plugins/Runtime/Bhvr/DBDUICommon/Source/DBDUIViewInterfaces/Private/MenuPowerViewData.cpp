#include "MenuPowerViewData.h"

UMenuPowerViewData::UMenuPowerViewData()
{
	this->DisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->EventName = FText::GetEmpty();
	this->ItemType = EInventoryItemType::None;
}
