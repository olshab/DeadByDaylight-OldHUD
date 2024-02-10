#include "OffTheRecord.h"

float UOffTheRecord::GetActivationDurationAtLevel() const
{
	return 0.0f;
}

UOffTheRecord::UOffTheRecord()
{
	this->_activationDurationLevels = 0.000000;
	this->_activatableEnduranceEffectClass = NULL;
	this->_activatableEnduranceEffect = NULL;
}
