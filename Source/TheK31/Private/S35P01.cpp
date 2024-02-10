#include "S35P01.h"

float US35P01::GetFastVaultsTimeSecondsAtLevel() const
{
	return 0.0f;
}

float US35P01::GetCooldownDurationSeconds() const
{
	return 0.0f;
}

US35P01::US35P01()
{
	this->_fastVaultsTimeSeconds = 4.000000;
	this->_cooldownDurationSeconds = 45.000000;
}
