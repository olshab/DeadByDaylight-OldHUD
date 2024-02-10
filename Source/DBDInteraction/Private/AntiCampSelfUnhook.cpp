#include "AntiCampSelfUnhook.h"

float UAntiCampSelfUnhook::GetAntiCampTrapImmunityDuration() const
{
	return 0.0f;
}

UAntiCampSelfUnhook::UAntiCampSelfUnhook()
{
	this->_enduranceEffectClass = NULL;
	this->_movementSpeedBonusEffectClass = NULL;
}
