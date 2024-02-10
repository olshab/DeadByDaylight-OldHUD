#include "StoreCharactersFiltersData.h"

FStoreCharactersFiltersData::FStoreCharactersFiltersData()
{
	this->IsFavorite = false;
	this->IsOwned = false;
	this->_rarityFiltersMap = TMap<EItemRarity, bool>();
}
