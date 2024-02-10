#include "Overcharge.h"

class UCurveFloat;

float UOvercharge::GetSkillCheckFailurePenaltyAtLevel() const
{
	return 0.0f;
}

UCurveFloat* UOvercharge::GetRegressionRateMultiplierCurve() const
{
	return NULL;
}

UOvercharge::UOvercharge()
{
	this->_skillCheckFailurePenalty = 0.000000;
	this->_regressionRateMultiplierCurve = NULL;
	this->_overchargedGeneratorTimers = TMap<AGenerator*, FFastTimer>();
	this->_gameplayModifierHandles = TMap<AGenerator*, uint64>();
}
