#include "DragonsGrip.h"

class ADBDPlayer;

void UDragonsGrip::Multicast_OnRevealSurvivor_Implementation(ADBDPlayer* survivor)
{

}

float UDragonsGrip::GetExposedEffectDurationAtLevel() const
{
	return 0.0f;
}

float UDragonsGrip::GetCooldownDurationAtLevel() const
{
	return 0.0f;
}

float UDragonsGrip::GetActivationDurationAtLevel() const
{
	return 0.0f;
}

UDragonsGrip::UDragonsGrip()
{
	this->_kickedGenerator = NULL;
	this->_exposedStatusEffect = NULL;
	this->_activationDuration = 0.000000;
	this->_cooldownDuration = 0.000000;
	this->_exposedEffectDuration = 0.000000;
	this->_onlyExposeFirstSurvivor = true;
}
