#include "InteractionPlayerProperties.h"

FInteractionPlayerProperties::FInteractionPlayerProperties()
{
	this->PlayerPositionAtStart = FVector_NetQuantize{};
	this->PlayerRotationAtStart = FRotator{};
	this->Requester = NULL;
	this->SnapPositionAtStart = FVector_NetQuantize{};
	this->SnapRotationAtStart = FRotator{};
	this->SnapDistanceAtStart = 0.0f;
	this->SnapTimeAtStart = 0.0f;
	this->ShouldSnapPosition = false;
}
