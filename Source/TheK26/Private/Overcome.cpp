#include "Overcome.h"

float UOvercome::GetExhaustionDurationAtLevel() const
{
	return 0.0f;
}

UOvercome::UOvercome()
{
	this->_exhaustionDuration = 0.000000;
	this->_injuredModifiedMovementSpeedBurstDurationWindow = 1.000000;
	this->_exhaustedEffectToImpose = NULL;
	this->_injuredModifiedMovementSpeedBurstStatusEffectToImpose = NULL;
	this->_exhaustedEffect = NULL;
	this->_injuredModifiedMovementSpeedBurstStatusEffect = NULL;
}
