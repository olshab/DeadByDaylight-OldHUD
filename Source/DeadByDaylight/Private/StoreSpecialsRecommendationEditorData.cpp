#include "StoreSpecialsRecommendationEditorData.h"

FStoreSpecialsRecommendationEditorData::FStoreSpecialsRecommendationEditorData()
{
	this->ActiveFrom = FDateTime{};
	this->ActiveTo = FDateTime{};
	this->AuricCellOffer = TEXT("");
	this->Outfits = TArray<FString>();
	this->Items = TArray<FString>();
	this->RecommendedCategoriesPriority = TArray<FString>();
}
