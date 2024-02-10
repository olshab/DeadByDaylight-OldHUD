#include "SlasherMovementComponent.h"

float USlasherMovementComponent::GetBaseMaxSpeed() const
{
	return 0.0f;
}

USlasherMovementComponent::USlasherMovementComponent()
{
	this->OnHitLedgeEventCooldown = -1.000000;
}
