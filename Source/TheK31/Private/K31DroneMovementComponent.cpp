#include "K31DroneMovementComponent.h"
#include "EDroneFlyingHeight.h"
#include "DroneRepMovement.h"
#include "DroneDeployDatum.h"
#include "EK31DroneMovementMode.h"
#include "Net/UnrealNetwork.h"

void UK31DroneMovementComponent::OnRep_ReplicatedMovement(const FDroneRepMovement& oldRepMovement)
{

}

void UK31DroneMovementComponent::OnRep_DeployDatum(const FDroneDeployDatum& oldDeployDatum)
{

}

bool UK31DroneMovementComponent::IsMeshAttachedToCharacterForDeploy() const
{
	return false;
}

bool UK31DroneMovementComponent::HasReachedDeployLocation() const
{
	return false;
}

EDroneFlyingHeight UK31DroneMovementComponent::GetTargetFlightHeight() const
{
	return EDroneFlyingHeight::Low;
}

EK31DroneMovementMode UK31DroneMovementComponent::GetMovementMode() const
{
	return EK31DroneMovementMode::NORMAL;
}

float UK31DroneMovementComponent::GetDistanceToTarget() const
{
	return 0.0f;
}

void UK31DroneMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK31DroneMovementComponent, _replicatedMovement);
	DOREPLIFETIME(UK31DroneMovementComponent, _repDeployDatum);
}

UK31DroneMovementComponent::UK31DroneMovementComponent()
{
	this->_rotationLerpTime = 0.350000;
	this->_deployMovementSpeed = 400.000000;
	this->_replicationFrequency = 1.000000;
	this->_smoothingTime = 0.100000;
	this->_maxSmoothUpdateDistance = 100.000000;
	this->_noSmoothUpdateDistance = 150.000000;
	this->_deployCharacterSocket = NAME_None;
	this->_maxTravelDistance = 1500.000000;
	this->_maxDeployTime = 3.000000;
	this->_gravity = 9.800000;
	this->_velocityInterpolationAlpha = 20.000000;
	this->_constantSpeedToAccelerationCurve = NULL;
	this->_gameState = NULL;
	this->_interactingActor = NULL;
	this->_additionalRotatingComponents = TArray<USceneComponent*>();
	this->_updatedComponentOriginalParent = NULL;
}
