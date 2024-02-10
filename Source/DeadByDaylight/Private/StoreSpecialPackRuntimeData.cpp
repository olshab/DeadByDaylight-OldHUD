#include "StoreSpecialPackRuntimeData.h"

FStoreSpecialPackRuntimeData::FStoreSpecialPackRuntimeData()
{
	this->Id = TEXT("");
	this->TitleByCulture = TMap<FString, FString>();
	this->Content = TArray<FStoreSpecialPackRuntimeItem>();
	this->OriginalCost = TMap<ECurrencyType, uint32>();
	this->DiscountedCost = TMap<ECurrencyType, uint32>();
	this->Discount = 0.0f;
	this->IsOwned = false;
	this->Image = TEXT("");
	this->DLCId = TEXT("");
	this->SortOrder = 0;
}
