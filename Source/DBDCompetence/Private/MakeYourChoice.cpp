#include "MakeYourChoice.h"

class ACamperPlayer;

void UMakeYourChoice::Multicast_TriggerEffectAppliedVFX_Implementation(const ACamperPlayer* player)
{

}

float UMakeYourChoice::GetMinimumHookedSurvivorDistance() const
{
	return 0.0f;
}

UMakeYourChoice::UMakeYourChoice()
{
	this->_minimumHookedSurvivorDistance = 3200.000000;
	this->_exposedEffect = NULL;
}
