#include "CoreMemoryController.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UCoreMemoryController::OnRep_CoreMemoryPortal()
{

}

void UCoreMemoryController::Authority_OnCharacterAdded(ADBDPlayer* player)
{

}

void UCoreMemoryController::Authority_CreatePlayerSpecificController(ADBDPlayer* player)
{

}

void UCoreMemoryController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCoreMemoryController, _playerSpecificControllers);
	DOREPLIFETIME(UCoreMemoryController, _coreMemoryPortal);
}

UCoreMemoryController::UCoreMemoryController()
{
	this->_behaviours = TArray<UCoreMemoryBehaviourBase*>();
	this->_playerSpecificControllers = TArray<ACoreMemoryChallengePlayerSpecificController*>();
	this->_archiveSpecialBehaviourId = NAME_None;
	this->_coreMemoryPortalClass = NULL;
	this->_coreMemoryPortal = NULL;
}
