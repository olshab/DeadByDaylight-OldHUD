#include "StandardWorldHauntComponent.h"

class ADBDPlayer;

void UStandardWorldHauntComponent::Multicast_OnAutomaticShutDownReached_Implementation()
{

}

void UStandardWorldHauntComponent::Multicast_BlessOrTrapCharacterEnteringZone_Implementation(ADBDPlayer* player, bool isBlessing)
{

}

void UStandardWorldHauntComponent::Authority_OnVoidZoneOpened()
{

}

void UStandardWorldHauntComponent::Authority_OnVoidZoneClosed()
{

}

void UStandardWorldHauntComponent::Authority_OnAutomaticShutDownReached()
{

}

UStandardWorldHauntComponent::UStandardWorldHauntComponent()
{
	this->_hasteStatusEffectClass = NULL;
	this->_hinderedEffectClass = NULL;
	this->_respawnableComponent = NULL;
}
