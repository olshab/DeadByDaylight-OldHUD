#include "DarkSense.h"

float UDarkSense::GetKillerRevealDurationAtLevel() const
{
	return 0.0f;
}

float UDarkSense::GetDarkSenseRevealRange() const
{
	return 0.0f;
}

void UDarkSense::Authority_OnInRangeChanged(const bool inRange)
{

}

UDarkSense::UDarkSense()
{
	this->_killerRevealDuration = 0.000000;
	this->_darkSenseRevealRange = 2400.000000;
	this->_timedRevealEffect = NULL;
}
