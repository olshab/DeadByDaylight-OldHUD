#include "K31TrapProximitySensor.h"

UK31TrapProximitySensor::UK31TrapProximitySensor()
{
	this->_registeredObjectStates = TSet<UGameplayTagContainerComponent*>();
	this->_trappedPlayersInZone = TSet<ADBDPlayer*>();
}
