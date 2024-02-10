#include "SlasherLoadout.h"

FSlasherLoadout::FSlasherLoadout()
{
	this->Slot0_CharmID = FCharmDropdown{};
	this->Slot1_CharmID = FCharmDropdown{};
	this->Slot2_CharmID = FCharmDropdown{};
	this->Perks = TArray<FDebugLoadoutPerk>();
	this->PowerAddonIDs = TArray<FDebugLoadoutAddon>();
	this->Slasher = FCharacterCustomizationDropdown{};
}
