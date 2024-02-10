#include "StoreCollectionRuntimeData.h"

FStoreCollectionRuntimeData::FStoreCollectionRuntimeData()
{
	this->CollectionId = TEXT("");
	this->InclusionVersion = TEXT("");
	this->UpdatedDate = FDateTime{};
	this->CollectionTitle = TMap<FString, FString>();
	this->CollectionSubtitle = TMap<FString, FString>();
	this->LimitedAvailabilityStartDate = FDateTime{};
	this->LimitedAvailabilityStartDate_IsSet = false;
	this->VisibleBeforeStartDate = false;
	this->VisibleBeforeStartDate_IsSet = false;
	this->LimitedAvailabilityEndDate = FDateTime{};
	this->LimitedAvailabilityEndDate_IsSet = false;
	this->VisibleAfterEndDate = false;
	this->VisibleAfterEndDate_IsSet = false;
	this->SortOrder = 0;
	this->HeroImage = FStoreCollectionMediaData{};
	this->HeroVideo = FStoreCollectionMediaData{};
	this->AdditionalImages = TArray<FStoreCollectionMediaData>();
	this->Items = TArray<FString>();
}
