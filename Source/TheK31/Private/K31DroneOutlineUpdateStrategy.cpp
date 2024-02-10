#include "K31DroneOutlineUpdateStrategy.h"

UK31DroneOutlineUpdateStrategy::UK31DroneOutlineUpdateStrategy()
{
	this->_invalidStates = TArray<EK31DroneStateID>();
	this->_killerMinimumDistance = 6000.000000;
	this->_survivorMinimumDistance = 0.000000;
	this->_survivorMaximumDistanceXY = 1200.000000;
}
