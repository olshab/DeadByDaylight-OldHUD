#include "InK32PodZoneLingeringEffect.h"

void UInK32PodZoneLingeringEffect::Authority_OnKillerPodDisabledChanged(const bool isDisabled)
{

}

void UInK32PodZoneLingeringEffect::Authority_OnKillerPodAcquiredChanged(const bool isAcquired)
{

}

UInK32PodZoneLingeringEffect::UInK32PodZoneLingeringEffect()
{
	this->_podsInRange = TArray<AK32KillerPod*>();
}
