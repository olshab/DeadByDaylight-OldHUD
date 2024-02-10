#include "S31P01.h"

float US31P01::GetKillerAuraRevealDuration() const
{
	return 0.0f;
}

US31P01::US31P01()
{
	this->_loseHealthStateDetectionRadius = 0.000000;
	this->_killerAuraRevealDuration = 0.000000;
	this->_timedAuraReveal = NULL;
}
