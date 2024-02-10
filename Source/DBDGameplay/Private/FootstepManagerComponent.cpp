#include "FootstepManagerComponent.h"
#include "UObject/NoExportTypes.h"

class UFootstepCreatorComponent;

void UFootstepManagerComponent::TriggerSpawnFootstep(UFootstepCreatorComponent* originatorComponent, FVector location)
{

}

void UFootstepManagerComponent::OnUpdateObserverFootsteps()
{

}

void UFootstepManagerComponent::OnUpdateCreatorFootsteps(UFootstepCreatorComponent* creator)
{

}

UFootstepManagerComponent::UFootstepManagerComponent()
{
	this->_raycastHalfAngle = 165.000000;
	this->_raycastZOffset = 120.000000;
	this->_raycastDistance = 360.000000;
	this->_minimumDecalSize = 200.000000;
	this->_maximumDecalSize = 240.000000;
	this->_projectionTickness = 20.000000;
	this->_footstepsMaterial = NULL;
	this->_currentFootSteps = TArray<FFootstep>();
	this->_decalSpawner = NULL;
}
