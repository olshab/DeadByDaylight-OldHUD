#include "StoreFeaturedCharacterRecommendationData.h"

FStoreFeaturedCharacterRecommendationData::FStoreFeaturedCharacterRecommendationData()
{
	this->Slots = TArray<FStoreFeaturedCharacterSlotRecommendationData>();
	this->Killer = TArray<FStoreFeaturedSingleCharacterRecommendationData>();
	this->Survivor = TArray<FStoreFeaturedSingleCharacterRecommendationData>();
	this->ActiveFrom = FDateTime{};
	this->ActiveTo = FDateTime{};
}
