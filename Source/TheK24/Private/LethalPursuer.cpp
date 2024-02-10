#include "LethalPursuer.h"

void ULethalPursuer::Server_ActivatePerk_Implementation()
{

}

void ULethalPursuer::Local_OnIntroCompleted()
{

}

float ULethalPursuer::GetSurvivorRevealDurationAtLevel() const
{
	return 0.0f;
}

ULethalPursuer::ULethalPursuer()
{
	this->_survivorRevealDuration = 0.000000;
	this->_timedRevealEffect = NULL;
}
