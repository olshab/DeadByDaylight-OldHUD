#include "K28P01.h"

float UK28P01::GetPerkActivationDurationAtLevel() const
{
	return 0.0f;
}

float UK28P01::GetInjuryTimerDuration() const
{
	return 0.0f;
}

UK28P01::UK28P01()
{
	this->_perkActivationDuration = 0.000000;
	this->_effectClass = NULL;
	this->_injuryTimerDuration = 0.000000;
	this->_injuryTimer = NULL;
}
