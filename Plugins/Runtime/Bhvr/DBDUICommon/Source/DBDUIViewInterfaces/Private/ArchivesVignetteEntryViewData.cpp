#include "ArchivesVignetteEntryViewData.h"

FArchivesVignetteEntryViewData::FArchivesVignetteEntryViewData()
{
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->IsRead = false;
	this->HasAudio = false;
	this->RewardImage = NULL;
	this->PreviewTextureOffset = 0.0f;
}
