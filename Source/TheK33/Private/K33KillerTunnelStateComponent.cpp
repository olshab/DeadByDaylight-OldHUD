#include "K33KillerTunnelStateComponent.h"
#include "Net/UnrealNetwork.h"

void UK33KillerTunnelStateComponent::OnRep_WorldElementsVisibility()
{

}

void UK33KillerTunnelStateComponent::OnRep_TunnelElementsVisibility()
{

}

void UK33KillerTunnelStateComponent::OnRep_KillerCollisionBlockType()
{

}

void UK33KillerTunnelStateComponent::OnRep_IsInTunnel()
{

}

void UK33KillerTunnelStateComponent::OnLevelReadyToPlay()
{

}

void UK33KillerTunnelStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK33KillerTunnelStateComponent, _isInTunnel);
	DOREPLIFETIME(UK33KillerTunnelStateComponent, _worldElementsVisibility);
	DOREPLIFETIME(UK33KillerTunnelStateComponent, _tunnelElementsVisibility);
	DOREPLIFETIME(UK33KillerTunnelStateComponent, _killerCollisionBlockType);
}

UK33KillerTunnelStateComponent::UK33KillerTunnelStateComponent()
{
	this->_movementInputConstraintStrategyClass = NULL;
	this->_movementInputConstraintStrategy = NULL;
	this->_inTunnelUntouchedClasses = TArray<TSubclassOf<AActor>>();
	this->_controlStationTunnelConnectionClass = NULL;
	this->_controlStationTunnelConnectionInstance = NULL;
	this->_killerCameraSocketName = TEXT("CameraSocket");
	this->_defaultOcclusionRefreshInterval = 0.200000;
	this->_minAnimPitchInTunnel = -10.000000;
	this->_worldElementsVisibility = true;
	this->_tunnelElementsVisibility = false;
	this->_killerCollisionBlockType = EK33KillerBlockCollisionType::AllCollisionsEnabled;
}
