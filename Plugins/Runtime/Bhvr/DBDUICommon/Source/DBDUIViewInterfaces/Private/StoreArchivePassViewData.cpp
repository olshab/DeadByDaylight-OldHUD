#include "StoreArchivePassViewData.h"

FStoreArchivePassViewData::FStoreArchivePassViewData()
{
	this->PassId = TEXT("");
	this->ArchiveId = NAME_None;
	this->DisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->IsOwned = false;
}
