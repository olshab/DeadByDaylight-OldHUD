#include "SelfPreservation.h"

float USelfPreservation::GetSelfPreservationEffectDuration() const
{
	return 0.0f;
}

float USelfPreservation::GetHitDistanceToTriggerPerkEffect() const
{
	return 0.0f;
}

USelfPreservation::USelfPreservation()
{
	this->_hitDistanceToTriggerPerkEffect = 0.000000;
	this->_selfPreservationEffectDuration = 0.000000;
}
