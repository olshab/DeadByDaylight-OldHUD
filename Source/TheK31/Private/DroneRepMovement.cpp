#include "DroneRepMovement.h"

FDroneRepMovement::FDroneRepMovement()
{
	this->IsRotating = false;
	this->IsRotationReversed = false;
	this->HasReachTarget = false;
	this->Location = FVector{};
	this->Rotation = FRotator{};
	this->FlyingHeight = EDroneFlyingHeight::Low;
	this->HeightAdjustmentMovingTimeOverride = 0.0f;
	this->InteractingActor = NULL;
	this->InteractingActorAttachSocket = NAME_None;
	this->SnapTime = 0.0f;
}
