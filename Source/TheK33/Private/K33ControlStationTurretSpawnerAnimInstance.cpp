#include "K33ControlStationTurretSpawnerAnimInstance.h"

UK33ControlStationTurretSpawnerAnimInstance::UK33ControlStationTurretSpawnerAnimInstance()
{
	this->_isBoxOpening = false;
	this->_isBoxOpened = false;
	this->_boxOpeningPlayRate = 0.000000;
	this->_spawnTurretAnimSequence = NULL;
}
