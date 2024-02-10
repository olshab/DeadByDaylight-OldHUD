#include "StoreFeaturedChapterPackRecommendationData.h"

FStoreFeaturedChapterPackRecommendationData::FStoreFeaturedChapterPackRecommendationData()
{
	this->ChapterPacks = TArray<FStoreFeaturedSingleChapterPackRecommendationData>();
	this->ActiveFrom = FDateTime{};
	this->ActiveTo = FDateTime{};
}
