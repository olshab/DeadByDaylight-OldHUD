#include "EventHookComponent.h"

class ADBDPlayer;

void UEventHookComponent::SetOutlineCarryingColorToDefault()
{

}

void UEventHookComponent::Authority_FireHookedScoreEvent(ADBDPlayer* hookedPlayer)
{

}

UEventHookComponent::UEventHookComponent()
{
	this->_offeringEffectTypeNeeded = EOfferingEffectType::Invalid;
	this->_rewardScoreOnFirstHookOnly = false;
	this->_updateOutlineForSurvivor = true;
	this->_updateOutlineForSlasher = true;
}
