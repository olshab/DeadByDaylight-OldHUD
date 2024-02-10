#include "StoreSpecialPackEditorData.h"

FStoreSpecialPackEditorData::FStoreSpecialPackEditorData()
{
	this->Id = TEXT("");
	this->Title = FText::GetEmpty();
	this->Image = FSoftObjectPath{};
	this->InclusionVersion = TEXT("");
	this->IsPurchasable = false;
	this->AvailableCurrencies = TSet<ECurrencyType>();
	this->Discount = 0.0f;
	this->SortOrder = 0;
	this->DLCId = TEXT("");
	this->Content = TArray<FStoreSpecialPackItem>();
	this->Activation = FStoreSpecialPackActivation{};
}
