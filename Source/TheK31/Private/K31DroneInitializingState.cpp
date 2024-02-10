#include "K31DroneInitializingState.h"
#include "Net/UnrealNetwork.h"

void UK31DroneInitializingState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK31DroneInitializingState, _initializingTimer);
}

UK31DroneInitializingState::UK31DroneInitializingState()
{
	this->_initializingTimer = NULL;
}
