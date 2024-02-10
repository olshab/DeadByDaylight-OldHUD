#include "StoreSpecialPackCatalogItemMetaData.h"

FStoreSpecialPackCatalogItemMetaData::FStoreSpecialPackCatalogItemMetaData()
{
	this->FullPrice = TArray<FStoreSpecialPackCatalogPrice>();
	this->SortOrder = 0;
	this->Activation = FStoreSpecialPackCatalogActivationData{};
	this->ImagePath = TEXT("");
	this->SpecialPackTitle = TMap<FString, FString>();
	this->Discount = 0.0f;
}
