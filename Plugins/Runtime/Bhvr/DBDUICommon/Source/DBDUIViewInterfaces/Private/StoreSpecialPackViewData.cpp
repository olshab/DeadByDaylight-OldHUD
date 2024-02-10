#include "StoreSpecialPackViewData.h"

UStoreSpecialPackViewData::UStoreSpecialPackViewData()
{
	this->Id = TEXT("");
	this->DisplayTitle = TEXT("");
	this->CharactersData = TArray<UStoreCharacterItemViewData*>();
	this->CustomizationsData = TArray<UStoreCustomizationItemViewData*>();
	this->SortOrder = 0;
	this->IsNew = false;
	this->IsOwned = false;
}
