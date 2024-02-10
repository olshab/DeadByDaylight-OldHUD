#include "SurvivorHackDroneInteraction.h"
#include "Net/UnrealNetwork.h"
#include "EDirectionalMinigameResult.h"

class ACamperPlayer;

void USurvivorHackDroneInteraction::Authority_OnMinigameEnd(ACamperPlayer* survivor, EDirectionalMinigameResult result)
{

}

void USurvivorHackDroneInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USurvivorHackDroneInteraction, _isHackingComplete);
}

USurvivorHackDroneInteraction::USurvivorHackDroneInteraction()
{
	this->_isHackingComplete = false;
	this->_playerSnapSocket = NAME_None;
}
