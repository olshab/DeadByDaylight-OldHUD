#include "Insidious.h"

float UInsidious::GetStillnessRequiredAtLevel() const
{
	return 0.0f;
}

UInsidious::UInsidious()
{
	this->_stillnessRequired = 0.000000;
	this->_insidiousEffect = NULL;
}
