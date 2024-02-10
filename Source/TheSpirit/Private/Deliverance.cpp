#include "Deliverance.h"

float UDeliverance::GetBrokenEffectDurationAtLevel() const
{
	return 0.0f;
}

UDeliverance::UDeliverance()
{
	this->_brokenEffectDurationPerLevel = 0.000000;
	this->_selfUnhookAlwaysSucceedEffectClass = NULL;
	this->_brokenEffectClass = NULL;
	this->_selfUnhookAlwaysSucceedEffect = NULL;
}
