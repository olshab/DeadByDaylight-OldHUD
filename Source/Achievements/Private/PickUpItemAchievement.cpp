#include "PickUpItemAchievement.h"

UPickUpItemAchievement::UPickUpItemAchievement()
{
	this->_statName = NAME_None;
	this->_triggerOnNormalItem = false;
	this->_triggerOnSpecialItem = false;
	this->_triggerOnCursedItem = false;
	this->_targetPlayerRole = EPlayerRole::VE_None;
}
