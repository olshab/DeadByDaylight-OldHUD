#include "StatusEffectInfo.h"

FStatusEffectInfo::FStatusEffectInfo()
{
	this->StatusEffectLifetime = 0.0f;
	this->CustomParamValue = 0.0f;
	this->ImposeEffectTo = EImposeEffectTo::EventInstigator;
	this->StatusEffect = NULL;
}
