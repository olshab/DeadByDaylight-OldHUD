#include "ActorNavMovementComponent.h"

class AActor;

void UActorNavMovementComponent::SetMaxSpeed(float maxSpeed)
{

}

void UActorNavMovementComponent::SetDeceleration(float deceleration)
{

}

void UActorNavMovementComponent::SetAcceleration(float acceleration)
{

}

AActor* UActorNavMovementComponent::GetOwningActor() const
{
	return NULL;
}

UActorNavMovementComponent::UActorNavMovementComponent()
{
	this->_owningActor = NULL;
	this->_pathFollowingComponent = NULL;
	this->bPositionCorrected = false;
	this->_maxSpeed = 0.000000;
	this->_acceleration = 0.000000;
	this->_deceleration = 0.000000;
	this->_brakingDeceleration = 0.000000;
}
