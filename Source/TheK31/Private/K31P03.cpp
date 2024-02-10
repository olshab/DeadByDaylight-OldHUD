#include "K31P03.h"

float UK31P03::GetReduceHealingSpeedEffectSeconds() const
{
	return 0.0f;
}

float UK31P03::GetHealPenaltyAtLevel() const
{
	return 0.0f;
}

UK31P03::UK31P03()
{
	this->_healPenalty = -0.030000;
	this->_reduceHealingSpeedEffectSeconds = 30.000000;
	this->_reduceHealingSpeedEffectClass = NULL;
	this->_survivorDebuffs = TArray<UStatusEffect*>();
}
