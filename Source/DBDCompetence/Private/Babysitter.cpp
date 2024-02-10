#include "Babysitter.h"

float UBabysitter::GetShowAuraTimeAtLevel() const
{
	return 0.0f;
}

float UBabysitter::GetScratchMarkHidingTimeAtLevel() const
{
	return 0.0f;
}

float UBabysitter::GetHasteEffectAtLevel() const
{
	return 0.0f;
}

float UBabysitter::GetCooldownTimeAtLevel() const
{
	return 0.0f;
}

UBabysitter::UBabysitter()
{
	this->_scratchMarkHidingTime = 0.000000;
	this->_hasteEffect = 0.000000;
	this->_showAuraTime = 0.000000;
	this->_cooldownTime = 0.000000;
	this->_perkEffect = NULL;
}
