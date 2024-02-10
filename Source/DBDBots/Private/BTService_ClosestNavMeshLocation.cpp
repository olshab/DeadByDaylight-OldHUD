#include "BTService_ClosestNavMeshLocation.h"

UBTService_ClosestNavMeshLocation::UBTService_ClosestNavMeshLocation()
{
	this->ValidLocationRefreshInterval = 2.000000;
	this->InvalidLocationRefreshInterval = 0.200000;
	this->NavDataAgentName = NAME_None;
	this->_navigationSystem = NULL;
	this->_navigationData = NULL;
}
