#include "Hysteria.h"

float UHysteria::GetPerkCooldownDurationAtLevel() const
{
	return 0.0f;
}

float UHysteria::GetObliviousEffectDurationAtLevel() const
{
	return 0.0f;
}

UHysteria::UHysteria()
{
	this->_obliviousEffectDuration = 0.000000;
	this->_perkCooldownDuration = 0.000000;
	this->_obliviousEffectClass = NULL;
	this->_obliviousEffectPerSurvivorMap = TMap<ACamperPlayer*, UHysteriaObliviousEffect*>();
}
