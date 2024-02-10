#include "BarrelEventComponent.h"

class ARespawnableInteractable;

void UBarrelEventComponent::DBD_BarrelSpawnRedBarrel()
{

}

void UBarrelEventComponent::DBD_BarrelSpawnGreenBarrel()
{

}

void UBarrelEventComponent::DBD_BarrelSpawnBlueBarrel()
{

}

void UBarrelEventComponent::DBD_BarrelPauseAllTimers(bool shouldPause)
{

}

void UBarrelEventComponent::DBD_BarrelDebugBarrelSpawnPositions(float duration) const
{

}

void UBarrelEventComponent::Authority_OnIntroComplete()
{

}

void UBarrelEventComponent::Authority_OnBarrelTimerDone(ARespawnableInteractable* respawnableInteractable)
{

}

void UBarrelEventComponent::Authority_OnBarrelInteractionChanged(ARespawnableInteractable* respawnableInteractable, bool isInteracting)
{

}

UBarrelEventComponent::UBarrelEventComponent()
{
	this->_spawnableBarrelClasses = TArray<TSubclassOf<ABarrel>>();
	this->_barrelLocations = TMap<ABarrel*, FVector>();
	this->_collisionCapsuleHalfHeight = 44.000000;
	this->_collisionCapsuleRadius = 22.000000;
}
