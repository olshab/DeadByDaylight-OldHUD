#include "Lithe.h"

float ULithe::GetMovementSpeedPercentage()
{
	return 0.0f;
}

float ULithe::GetMovementSpeedDuration()
{
	return 0.0f;
}

ULithe::ULithe()
{
	this->_exhaustedStatusEffectClass = NULL;
	this->_movementSpeedStatusEffectClass = NULL;
	this->_movementSpeedPercentage = 0.500000;
	this->_movementSpeedDuration = 3.000000;
}
