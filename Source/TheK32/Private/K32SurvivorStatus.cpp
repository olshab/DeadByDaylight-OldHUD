#include "K32SurvivorStatus.h"

FK32SurvivorStatus::FK32SurvivorStatus()
{
	this->OwningSurvivor = NULL;
	this->IsAssimilated = false;
	this->RecentLocations = TArray<FVector>();
	this->Authority_CrossAssimilationStartedTime = TMap<ACamperPlayer*, float>();
	this->Authority_IsBeingCrossAssimilated = false;
	this->Authority_CanBeAffectedByPower = false;
	this->Authority_LastTimeCanBeAffectedByPowerEnabled = 0.0f;
}
