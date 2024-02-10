#include "StoreFeaturedCharacterRecommendationEditorData.h"

FStoreFeaturedCharacterRecommendationEditorData::FStoreFeaturedCharacterRecommendationEditorData()
{
	this->Id = TEXT("");
	this->InclusionVersion = TEXT("");
	this->ActiveFrom = FDateTime{};
	this->ActiveTo = FDateTime{};
	this->Slots = TArray<EPlayerRole>();
	this->Killers = TArray<FStoreFeaturedKillerEditorData>();
	this->Survivors = TArray<FStoreFeaturedSurvivorEditorData>();
}
