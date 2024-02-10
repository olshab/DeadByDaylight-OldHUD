#include "K31DroneLaserController.h"

void UK31DroneLaserController::OnLocallyObservedChanged()
{

}

void UK31DroneLaserController::Local_OnIdleChanged(bool isIdle, float idleStartTime)
{

}

void UK31DroneLaserController::Local_OnCrouchChanged(bool isCrouched)
{

}

UK31DroneLaserController::UK31DroneLaserController()
{
	this->_localPlayerTracker = NULL;
	this->_locallyObservedPlayer = NULL;
	this->_laserActor = NULL;
}
