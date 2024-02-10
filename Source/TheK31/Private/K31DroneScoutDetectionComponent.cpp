#include "K31DroneScoutDetectionComponent.h"

class UActorComponent;

void UK31DroneScoutDetectionComponent::OnLaserDeactivate(UActorComponent* component)
{

}

void UK31DroneScoutDetectionComponent::OnLaserActive(UActorComponent* component, bool reset)
{

}

UK31DroneScoutDetectionComponent::UK31DroneScoutDetectionComponent()
{
	this->_raycastSphereData = TArray<FK31DroneScoutDetectionSphereRaycastStruct>();
	this->_survivorLastFrameData = TMap<ACamperPlayer*, FSurvivorDroneFrameDatum>();
	this->_survivorCurrentFrameData = TMap<ACamperPlayer*, FSurvivorDroneFrameDatum>();
	this->_detectedSurvivors = TArray<ACamperPlayer*>();
}
