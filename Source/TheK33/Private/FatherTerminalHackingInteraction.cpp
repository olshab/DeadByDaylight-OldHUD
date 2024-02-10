#include "FatherTerminalHackingInteraction.h"
#include "Net/UnrealNetwork.h"
#include "EDirectionalMinigameResult.h"

class ACamperPlayer;

void UFatherTerminalHackingInteraction::OnRep_IsCooldownTimerRunning()
{

}

void UFatherTerminalHackingInteraction::Authority_OnMiniGameEnd(ACamperPlayer* survivor, EDirectionalMinigameResult result)
{

}

void UFatherTerminalHackingInteraction::Authority_OnCooldownTimerDone()
{

}

void UFatherTerminalHackingInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UFatherTerminalHackingInteraction, _isHackingCompleted);
	DOREPLIFETIME(UFatherTerminalHackingInteraction, _isCooldownTimerRunning);
	DOREPLIFETIME(UFatherTerminalHackingInteraction, _useSuccessfullyEndMiniGameExit);
}

UFatherTerminalHackingInteraction::UFatherTerminalHackingInteraction()
{
	this->_cooldownDurationSeconds = 15.000000;
	this->_isHackingCompleted = false;
	this->_isCooldownTimerRunning = false;
	this->_useSuccessfullyEndMiniGameExit = false;
}
