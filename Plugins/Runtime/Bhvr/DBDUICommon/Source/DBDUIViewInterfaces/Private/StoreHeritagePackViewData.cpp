#include "StoreHeritagePackViewData.h"

FStoreHeritagePackViewData::FStoreHeritagePackViewData()
{
	this->HeritageId = TEXT("");
	this->DisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->PackImage = NULL;
	this->ChapterPacks = TArray<UStoreChapterPackViewData*>();
	this->SortOrder = 0;
	this->IsNew = false;
	this->IsOwned = false;
}
