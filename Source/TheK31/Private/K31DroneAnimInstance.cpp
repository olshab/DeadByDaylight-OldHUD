#include "K31DroneAnimInstance.h"

UK31DroneAnimInstance::UK31DroneAnimInstance()
{
	this->_droneState = EK31DroneStateID::NONE;
	this->_droneStateController = NULL;
	this->_owningDrone = NULL;
}
