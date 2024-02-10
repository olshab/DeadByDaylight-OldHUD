#include "StateController.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainer.h"

void UStateController::OnRep_States()
{

}

void UStateController::OnRep_AuthorityRepCurrentState()
{

}

FGameplayTag UStateController::GetCurrentStateID() const
{
	return FGameplayTag{};
}

void UStateController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UStateController, _states);
	DOREPLIFETIME(UStateController, _authority_RepCurrentState);
}

UStateController::UStateController()
{
	this->_stateClasses = TArray<TSubclassOf<UBaseReplicatedState>>();
	this->_defaultStateClass = NULL;
	this->_states = TArray<UBaseReplicatedState*>();
	this->_local_currentState = NULL;
	this->_authority_RepCurrentState = NULL;
}
