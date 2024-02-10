#include "StoreCharactersSelectionViewData.h"

FStoreCharactersSelectionViewData::FStoreCharactersSelectionViewData()
{
	this->Characters = TArray<UStoreCharacterItemViewData*>();
	this->SelectedCharacterIndex = 0;
}
