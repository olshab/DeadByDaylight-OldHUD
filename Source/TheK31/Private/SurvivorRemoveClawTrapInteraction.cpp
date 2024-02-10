#include "SurvivorRemoveClawTrapInteraction.h"
#include "Net/UnrealNetwork.h"
#include "EDirectionalMinigameResult.h"

class ACamperPlayer;

void USurvivorRemoveClawTrapInteraction::Authority_OnMinigameEnd(ACamperPlayer* survivor, EDirectionalMinigameResult result)
{

}

void USurvivorRemoveClawTrapInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USurvivorRemoveClawTrapInteraction, _isHackingComplete);
}

USurvivorRemoveClawTrapInteraction::USurvivorRemoveClawTrapInteraction()
{
	this->_isHackingComplete = false;
	this->_survivorClawTrapComponent = NULL;
}
