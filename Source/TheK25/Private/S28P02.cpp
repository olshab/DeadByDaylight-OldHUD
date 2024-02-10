#include "S28P02.h"

float US28P02::GetHealingSpeedGainPercentageAtLevel() const
{
	return 0.0f;
}

US28P02::US28P02()
{
	this->_healingSpeedGainPercentage = 0.000000;
	this->_healingSpeedIncreaseEffect = NULL;
	this->_revealInjuredPlayersInBoonRangeEffectClass = NULL;
}
