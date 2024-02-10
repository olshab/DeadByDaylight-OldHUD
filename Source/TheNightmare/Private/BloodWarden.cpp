#include "BloodWarden.h"

float UBloodWarden::GetPerkLevelSpikeDurationsAtLevel() const
{
	return 0.0f;
}

UBloodWarden::UBloodWarden()
{
	this->_bloodWardenBlockerStatusEffectClass = NULL;
	this->_revealPlayerStatusEffectClass = NULL;
	this->_perkLevelSpikeDurations = 0.000000;
}
