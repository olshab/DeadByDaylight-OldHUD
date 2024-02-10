#include "K32KillerPodSpawningIndicatorSettings.h"

FK32KillerPodSpawningIndicatorSettings::FK32KillerPodSpawningIndicatorSettings()
{
	this->SpawnLocation = FVector{};
	this->SpawnForwardRotation = FRotator{};
	this->IsVisible = false;
	this->IsInValidLocationForKillerPod = false;
	this->IsDestroyingPod = false;
	this->IsTeleportingToSurvivor = false;
}
