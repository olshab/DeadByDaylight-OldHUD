#include "K31DroneDisabledState.h"
#include "Net/UnrealNetwork.h"

void UK31DroneDisabledState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK31DroneDisabledState, _disabledTimer);
}

UK31DroneDisabledState::UK31DroneDisabledState()
{
	this->_disabledTimer = NULL;
}
