#include "TerrorRadiusReceiverComponent.h"

bool UTerrorRadiusReceiverComponent::IsInTerrorRadiusRange() const
{
	return false;
}

bool UTerrorRadiusReceiverComponent::IsInTerrorRadius() const
{
	return false;
}

UTerrorRadiusReceiverComponent::UTerrorRadiusReceiverComponent()
{
	this->_trVerticalDistanceFactor = NULL;
	this->_heartbeatSmoothingInterpolationSpeed = 1.000000;
}
