#include "PlayerStateData.h"

FPlayerStateData::FPlayerStateData()
{
	this->CharacterLevel = 0;
	this->EquipedFavorId = NAME_None;
	this->EquipedPerkIds = TArray<FName>();
	this->EquipedPerkLevels = TArray<int32>();
	this->EquippedBannerId = TEXT("");
	this->EquippedBadgeId = TEXT("");
	this->_playerGameState = EGameState::VE_Active;
	this->_prestigeLevel = 0;
}
