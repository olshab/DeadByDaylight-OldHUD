#include "InspectK31DroneInteraction.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UInspectK31DroneInteraction::Server_SetIsPressingInput_Implementation(bool isPressing)
{

}

void UInspectK31DroneInteraction::OnChargeCompletedChanged(bool completed, const TArray<AActor*>& instigatorsForCompletion)
{

}

void UInspectK31DroneInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UInspectK31DroneInteraction, _actionProcessor);
}

UInspectK31DroneInteraction::UInspectK31DroneInteraction()
{
	this->_actionProcessorClass = NULL;
	this->_enableMaxSpeedSlowdown = false;
	this->_chargingSpeedCurve = NULL;
	this->_dechargingSpeedCurve = NULL;
	this->_actionProcessor = NULL;
}
