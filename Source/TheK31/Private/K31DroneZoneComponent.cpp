#include "K31DroneZoneComponent.h"

UK31DroneZoneComponent::UK31DroneZoneComponent()
{
	this->_playerDroneZoneStructMap = TMap<ADBDPlayer*, FK31PlayerDroneZoneStruct>();
	this->_maxDistanceZ_ScoutingLaser = 250.000000;
}
