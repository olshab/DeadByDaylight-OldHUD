#include "GuardPullSurvivorOutOfLocker.h"

UGuardPullSurvivorOutOfLocker::UGuardPullSurvivorOutOfLocker()
{
	this->_targetSurvivor = NULL;
	this->_snapPositionDistanceOnPullOutHealthy = 50.000000;
	this->_snapTime = 0.250000;
}
