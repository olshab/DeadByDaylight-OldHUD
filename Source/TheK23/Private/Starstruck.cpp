#include "Starstruck.h"

float UStarstruck::GetPerkCooldownDurationAtLevel() const
{
	return 0.0f;
}

float UStarstruck::GetExposedEffectDurationAtLevel() const
{
	return 0.0f;
}

UStarstruck::UStarstruck()
{
	this->_exposedEffectDuration = 0.000000;
	this->_perkCooldownDuration = 0.000000;
	this->_camperExposedEffects = TMap<TWeakObjectPtr<ACamperPlayer>, TWeakObjectPtr<UStatusEffect>>();
	this->_exposedEffectClass = NULL;
}
