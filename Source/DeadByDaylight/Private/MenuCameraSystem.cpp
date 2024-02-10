#include "MenuCameraSystem.h"

UMenuCameraSystem::UMenuCameraSystem()
{
	this->_tunables = NULL;
	this->_cameraTarget = NULL;
	this->_reservedTargets = TMap<EDBDCameraViewType, ACameraActor*>();
}
