#include "AISkill_FindInteractable_Drone.h"

UAISkill_FindInteractable_Drone::UAISkill_FindInteractable_Drone()
{
	this->ValidGoalObjectClasses = TArray<TSubclassOf<AActor>>();
	this->DroneRadiusMargin = 100.000000;
	this->DroneScoutingAutoDiscoverRange = 1600.000000;
	this->DroneStealthAutoDiscoverRange = 400.000000;
}
