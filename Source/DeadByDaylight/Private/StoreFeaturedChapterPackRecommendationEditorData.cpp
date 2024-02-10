#include "StoreFeaturedChapterPackRecommendationEditorData.h"

FStoreFeaturedChapterPackRecommendationEditorData::FStoreFeaturedChapterPackRecommendationEditorData()
{
	this->Id = TEXT("");
	this->InclusionVersion = TEXT("");
	this->ActiveFrom = FDateTime{};
	this->ActiveTo = FDateTime{};
	this->ChapterPacks = TArray<FStoreFeaturedChapterPackEditorData>();
}
