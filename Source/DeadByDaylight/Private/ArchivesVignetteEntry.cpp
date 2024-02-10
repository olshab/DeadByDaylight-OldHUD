#include "ArchivesVignetteEntry.h"

FArchivesVignetteEntry::FArchivesVignetteEntry()
{
	this->Title = FText::GetEmpty();
	this->Text = FText::GetEmpty();
	this->HasAudio = false;
	this->RewardImage = NULL;
	this->PreviewTextureOffset = 0.0f;
}
