#include "Adrenaline.h"

void UAdrenaline::Multicast_DispatchAdrenalineEvents_Implementation(const bool isHealthy, const float healAmount)
{

}

float UAdrenaline::GetExhaustionDuration() const
{
	return 0.0f;
}

UAdrenaline::UAdrenaline()
{
	this->_exhaustionDuration = 0.000000;
	this->_speedEffect = NULL;
	this->_exhaustionEffect = NULL;
	this->_movementSpeedDuration = 5.000000;
	this->_movementSpeedPercentage = 0.500000;
}
