#include "StoreSpecialsRecommendationData.h"

FStoreSpecialsRecommendationData::FStoreSpecialsRecommendationData()
{
	this->ActiveFrom = FDateTime{};
	this->ActiveTo = FDateTime{};
	this->CategoryPriorities = TArray<FString>();
	this->Recommendations = TArray<FStoreSpecialsItemRecommendationsData>();
}
