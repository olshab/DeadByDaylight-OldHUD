#include "K33KillerControlStationSelectorComponent.h"
#include "Net/UnrealNetwork.h"

class AK33ControlStation;

void UK33KillerControlStationSelectorComponent::Server_SetSelectedControlStation_Implementation(AK33ControlStation* controlStation)
{

}

bool UK33KillerControlStationSelectorComponent::Server_SetSelectedControlStation_Validate(AK33ControlStation* controlStation)
{
	return true;
}

void UK33KillerControlStationSelectorComponent::OnRep_Replicated_SelectedControlStation(AK33ControlStation* previousSelectedControlStation)
{

}

void UK33KillerControlStationSelectorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK33KillerControlStationSelectorComponent, _replicated_selectedControlStation);
}

UK33KillerControlStationSelectorComponent::UK33KillerControlStationSelectorComponent()
{
	this->_thresholdDeltaSquaredDistanceForBestTargetRecalculation = 500.000000;
	this->_minDeltaDotProductForBestTargetRecalculation = 0.980000;
	this->_minDotProductForEligibleControlStationTarget = 0.750000;
	this->_minDistanceForEligibleControlStationTargetOutsideTunnel = 800.000000;
	this->_actorIndicatorClass = NULL;
	this->_tunnelNavigationComponentClass = NULL;
	this->_indicatorInstance = NULL;
	this->_tunnelNavigationComponentInstance = NULL;
	this->_replicated_selectedControlStation = NULL;
	this->_aimDirectionProvider = NULL;
}
