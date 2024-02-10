#include "K31PlayerZoneStatus.h"

UK31PlayerZoneStatus::UK31PlayerZoneStatus()
{
	this->_overlappingZones = TMap<UK31DroneZoneComponent*, FK31DroneZoneOverlapDatum>();
}
