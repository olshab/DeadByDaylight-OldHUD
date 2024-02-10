#include "ThanatophobiaPerk.h"

int32 UThanatophobiaPerk::GetNumSurvivorsForAdditionalSpeedModifier() const
{
	return 0;
}

float UThanatophobiaPerk::GetAdditionalActionSpeedModifierAtLevel() const
{
	return 0.0f;
}

float UThanatophobiaPerk::GetActionSpeedModifierAtLevel() const
{
	return 0.0f;
}

UThanatophobiaPerk::UThanatophobiaPerk()
{
	this->_actionSpeedModifier = 0.000000;
	this->_additionalActionSpeedModifier = 0.000000;
	this->_numSurvivorsForAdditionalSpeedModifier = 4;
}
