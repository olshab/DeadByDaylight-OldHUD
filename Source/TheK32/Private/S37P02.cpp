#include "S37P02.h"

float US37P02::GetHasteSpeedAmountAtLevel() const
{
	return 0.0f;
}

float US37P02::GetEnduranceEffectTimerAtLevel() const
{
	return 0.0f;
}

US37P02::US37P02()
{
	this->_enduranceStatusEffect = NULL;
	this->_hasteStatusEffect = NULL;
	this->_enduranceEffectTimer = 0.000000;
	this->_hasteSpeedAmount = 0.000000;
}
