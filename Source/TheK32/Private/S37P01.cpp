#include "S37P01.h"

float US37P01::GetKillerRevealedTimeAtLevel() const
{
	return 0.0f;
}

float US37P01::GetChaseLingeringTimerAtLevel() const
{
	return 0.0f;
}

US37P01::US37P01()
{
	this->_killerRevealedTime = 0.000000;
	this->_chaseLingeringTimer = 0.000000;
	this->_revealKillerStatusEffectClass = NULL;
	this->_revealGeneratorStatusEffectClass = NULL;
	this->_revealGeneratorStatusEffect = NULL;
}
