#include "FreeSpotAroundLocationSpawnStrategy.h"

UFreeSpotAroundLocationSpawnStrategy::UFreeSpotAroundLocationSpawnStrategy()
{
	this->_minSpawnRadius = 0.000000;
	this->_maxSpawnRadius = 0.000000;
	this->_floorDepth = 0.000000;
	this->_collisionSphereRadius = 0.000000;
	this->_checkForEveryAngleDegrees = 0.000000;
	this->_numberOfPositionToCheckInAnAngle = 0.000000;
	this->_actorsToIgnore = TArray<TSubclassOf<AActor>>();
}
