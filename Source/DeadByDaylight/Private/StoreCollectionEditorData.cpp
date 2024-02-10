#include "StoreCollectionEditorData.h"

FStoreCollectionEditorData::FStoreCollectionEditorData()
{
	this->CollectionId = TEXT("");
	this->InclusionVersion = TEXT("");
	this->CollectionTitle = FText::GetEmpty();
	this->CollectionSubtitle = FText::GetEmpty();
	this->DateUpdated = FDateTime{};
	this->IsEnabled = false;
	this->HasLimitedAvailabilityStartDate = false;
	this->LimitedAvailabilityStart = FStoreCollectionLimitedAvailabilityStart{};
	this->HasLimitedAvailabilityEndDate = false;
	this->LimitedAvailabilityEnd = FStoreCollectionLimitedAvailabilityEnd{};
	this->SortOrder = 0;
	this->HeroImage = FSoftObjectPath{};
	this->HeroVideo = FSoftObjectPath{};
	this->AdditionalImages = TArray<FSoftObjectPath>();
	this->Items = TArray<FString>();
}
