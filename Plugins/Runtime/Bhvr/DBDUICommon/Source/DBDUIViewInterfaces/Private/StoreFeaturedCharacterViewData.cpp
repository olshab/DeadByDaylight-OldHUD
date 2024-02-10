#include "StoreFeaturedCharacterViewData.h"

FStoreFeaturedCharacterViewData::FStoreFeaturedCharacterViewData()
{
	this->CharacterIndex = 0;
	this->PlayerRole = EPlayerRole::VE_None;
	this->CharacterPortrait = FSoftRemoteContentCacheObjectPtr{};
	this->CharacterName = FText::GetEmpty();
}
