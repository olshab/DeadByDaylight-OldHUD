#include "K32P02.h"

float UK32P02::GetPerkRangeAtLevel() const
{
	return 0.0f;
}

float UK32P02::GetPerkCooldownAtLevel() const
{
	return 0.0f;
}

float UK32P02::GetHinderedEffectDurationAtLevel() const
{
	return 0.0f;
}

UK32P02::UK32P02()
{
	this->_hinderedStatusEffectClass = NULL;
	this->_perkRange = 0.000000;
	this->_hinderedEffectDuration = 0.000000;
	this->_perkCooldown = 0.000000;
}
