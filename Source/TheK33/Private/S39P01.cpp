#include "S39P01.h"

float US39P01::GetSurvivorAuraRevealTime() const
{
	return 0.0f;
}

float US39P01::GetPerkCooldownTimeAtLevel() const
{
	return 0.0f;
}

float US39P01::GetGeneratorAuraRevealTime() const
{
	return 0.0f;
}

float US39P01::GetBloodAndGruntSuppressionTimeAtLevel() const
{
	return 0.0f;
}

US39P01::US39P01()
{
	this->_bloodAndGruntSuppressionTime = 0.000000;
	this->_survivorAuraRevealTime = 0.000000;
	this->_generatorAuraRevealTime = 0.000000;
	this->_perkCooldownTime = 0.000000;
	this->_suppressBloodAndGruntsEffectClass = NULL;
	this->_revealSurvivorAurasEffectClass = NULL;
}
