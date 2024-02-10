#include "S32P02.h"

float US32P02::GetHitDistanceAtLevel() const
{
	return 0.0f;
}

float US32P02::GetHealingProgressionIncreaseAtLevel() const
{
	return 0.0f;
}

US32P02::US32P02()
{
	this->_hitDistanceToTriggerPerkEffect = 0.000000;
	this->_healingProgressionIncreasedOnHit = 0.000000;
	this->_tresholdToHealCompletely = 0.000000;
}
