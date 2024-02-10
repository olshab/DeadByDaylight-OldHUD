#include "UIViewFlagSaveData.h"

FUIViewFlagSaveData::FUIViewFlagSaveData()
{
	this->CharactersFirstBloodweb = TMap<FString, bool>();
	this->ArchiveStoryHasBeenSeenStatus = TMap<FString, bool>();
	this->ArchiveNewTomeAnimationHasBeenSeenStatus = TMap<FString, bool>();
}
