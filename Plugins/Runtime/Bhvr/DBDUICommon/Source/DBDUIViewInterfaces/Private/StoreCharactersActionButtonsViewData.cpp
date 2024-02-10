#include "StoreCharactersActionButtonsViewData.h"

FStoreCharactersActionButtonsViewData::FStoreCharactersActionButtonsViewData()
{
	this->UnlockState = EStoreCharactersActionButtonState::Hidden;
	this->EquipState = EStoreCharactersActionButtonState::Hidden;
	this->EquipAllState = EStoreCharactersActionButtonState::Hidden;
	this->SelectAllState = EStoreCharactersActionButtonState::Hidden;
	this->SeePackState = EStoreCharactersActionButtonState::Hidden;
	this->PriceTagData = TArray<FPriceTagViewData>();
	this->PackName = FText::GetEmpty();
}
