#include "S36P01.h"

float US36P01::GetHasteEffectMovementSpeedIncrease() const
{
	return 0.0f;
}

float US36P01::GetHasteEffectDurationSeconds() const
{
	return 0.0f;
}

float US36P01::GetExhaustedEffectDurationAtLevel() const
{
	return 0.0f;
}

float US36P01::GetActivationDurationAtLevel() const
{
	return 0.0f;
}

void US36P01::Authority_OnIsRunningAndMovingChanged(const bool isRunningAndMoving)
{

}

US36P01::US36P01()
{
	this->_hasteEffectDurationSeconds = 4.000000;
	this->_hasteEffectMovementSpeedIncrease = 1.500000;
	this->_activationDurationSeconds = 10.000000;
	this->_exhaustedEffectDurationSeconds = 60.000000;
	this->_hasteStatusEffect = NULL;
	this->_hasteEffectClass = NULL;
	this->_exhaustedStatusEffect = NULL;
	this->_exhaustedEffectClass = NULL;
}
