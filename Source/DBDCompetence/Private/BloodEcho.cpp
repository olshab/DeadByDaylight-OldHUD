#include "BloodEcho.h"

float UBloodEcho::GetCooldownDurationAtLevel() const
{
	return 0.0f;
}

UBloodEcho::UBloodEcho()
{
	this->_hemorrhageStatusEffectClass = NULL;
	this->_exhaustedStatusEffectClass = NULL;
	this->_cooldownDuration = 0.000000;
}
