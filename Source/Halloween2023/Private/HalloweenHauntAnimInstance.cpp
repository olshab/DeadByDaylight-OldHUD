#include "HalloweenHauntAnimInstance.h"

void UHalloweenHauntAnimInstance::VoidEnergyChange()
{

}

void UHalloweenHauntAnimInstance::TrapAnimationEnd()
{

}

void UHalloweenHauntAnimInstance::PlayerTriggeredTrap()
{

}

void UHalloweenHauntAnimInstance::EndVoidEnergyChange()
{

}

UHalloweenHauntAnimInstance::UHalloweenHauntAnimInstance()
{
	this->_hauntChangingVoidEnergy = false;
	this->_hauntTrapTriggered = false;
	this->_timeUntilAbsorbAnimationEnds = 5.000000;
	this->_timeUntilTrapAnimationEnds = 1.000000;
}
