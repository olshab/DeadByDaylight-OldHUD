#include "K28P02.h"

float UK28P02::GetPerkActivationTime() const
{
	return 0.0f;
}

float UK28P02::GetLockerDetectionRadius() const
{
	return 0.0f;
}

UK28P02::UK28P02()
{
	this->PerkActivationTime = 0.000000;
	this->LockerDetectionRadius = 0.000000;
	this->_timedRevealToKillerEffectClass = NULL;
}
