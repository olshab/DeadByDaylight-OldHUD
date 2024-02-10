#include "DirectionalMinigameComponent.h"
#include "Net/UnrealNetwork.h"
#include "EDirectionalInputKey.h"
#include "DirectionalMiniGameDefinition.h"

class ACamperPlayer;

void UDirectionalMinigameComponent::Server_EnterKey_Implementation(EDirectionalInputKey enteredKey)
{

}

void UDirectionalMinigameComponent::Server_CancelMinigame_Implementation()
{

}

void UDirectionalMinigameComponent::OnRep_IsInProgress()
{

}

void UDirectionalMinigameComponent::Authority_StartMinigameForSurvivor(ACamperPlayer* survivor, const FDirectionalMiniGameDefinition& miniGameDefinition)
{

}

void UDirectionalMinigameComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDirectionalMinigameComponent, _currentlyEngagedSurvivor);
	DOREPLIFETIME(UDirectionalMinigameComponent, _currentSequence);
	DOREPLIFETIME(UDirectionalMinigameComponent, _isInProgress);
	DOREPLIFETIME(UDirectionalMinigameComponent, _currentKeyIndex);
	DOREPLIFETIME(UDirectionalMinigameComponent, _miniGameDefinition);
}

UDirectionalMinigameComponent::UDirectionalMinigameComponent()
{
	this->_currentlyEngagedSurvivor = NULL;
	this->_currentSequence = TArray<EDirectionalInputKey>();
	this->_isInProgress = false;
	this->_currentKeyIndex = -1;
}
