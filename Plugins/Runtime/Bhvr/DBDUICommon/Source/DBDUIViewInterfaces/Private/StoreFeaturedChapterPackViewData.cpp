#include "StoreFeaturedChapterPackViewData.h"

UStoreFeaturedChapterPackViewData::UStoreFeaturedChapterPackViewData()
{
	this->Title = FText::GetEmpty();
	this->AssociatedDlcId = TEXT("");
	this->IsOwned = false;
}
