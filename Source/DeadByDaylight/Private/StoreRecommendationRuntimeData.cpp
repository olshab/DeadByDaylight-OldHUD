#include "StoreRecommendationRuntimeData.h"

FStoreRecommendationRuntimeData::FStoreRecommendationRuntimeData()
{
	this->FeaturedCharacterRecommendations = TArray<FStoreFeaturedCharacterRecommendationData>();
	this->FeaturedChapterPackRecommendations = TArray<FStoreFeaturedChapterPackRecommendationData>();
	this->SpecialsRecommendations = TArray<FStoreSpecialsRecommendationData>();
}
