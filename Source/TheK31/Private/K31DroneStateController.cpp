#include "K31DroneStateController.h"
#include "EK31DroneStateID.h"
#include "Net/UnrealNetwork.h"

void UK31DroneStateController::OnRep_States()
{

}

void UK31DroneStateController::OnRep_AuthorityRepCurrentState()
{

}

EK31DroneStateID UK31DroneStateController::GetPreviousStateID() const
{
	return EK31DroneStateID::NONE;
}

EK31DroneStateID UK31DroneStateController::GetCurrentStateID() const
{
	return EK31DroneStateID::NONE;
}

void UK31DroneStateController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK31DroneStateController, _states);
	DOREPLIFETIME(UK31DroneStateController, _authority_RepCurrentState);
}

UK31DroneStateController::UK31DroneStateController()
{
	this->_stateClasses = TArray<TSubclassOf<UK31DroneState>>();
	this->_defaultStateClass = NULL;
	this->_gameState = NULL;
	this->_states = TArray<UK31DroneState*>();
}
