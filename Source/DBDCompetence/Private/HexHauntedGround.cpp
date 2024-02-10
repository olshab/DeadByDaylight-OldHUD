#include "HexHauntedGround.h"

float UHexHauntedGround::GetExposedDurationAtLevel() const
{
	return 0.0f;
}

UHexHauntedGround::UHexHauntedGround()
{
	this->_exposedStatusEffectDuration = 0.000000;
	this->_exposedStatusEffectClass = NULL;
}
