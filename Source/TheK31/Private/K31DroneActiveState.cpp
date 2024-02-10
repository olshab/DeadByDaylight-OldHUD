#include "K31DroneActiveState.h"
#include "Net/UnrealNetwork.h"

float UK31DroneActiveState::GetRevertToScoutingMaxCharge()
{
	return 0.0f;
}

float UK31DroneActiveState::GetRevertToScoutingCurrentCharge()
{
	return 0.0f;
}

void UK31DroneActiveState::Authority_OnChargeDepleted()
{

}

void UK31DroneActiveState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK31DroneActiveState, _revertToScoutingCharge);
	DOREPLIFETIME(UK31DroneActiveState, _unhackableTimer);
}

UK31DroneActiveState::UK31DroneActiveState()
{
	this->_doNearbyClawTrapsDisableHacking = false;
	this->_revertToScoutingCharge = NULL;
	this->_unhackableTimer = NULL;
}
