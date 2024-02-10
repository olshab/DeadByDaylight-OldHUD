#include "CamperMovementComponent.h"
#include "ECamperDamageState.h"
#include "UObject/NoExportTypes.h"

void UCamperMovementComponent::OnCamperHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState)
{

}

FRotator UCamperMovementComponent::GetRotationRateWhileCrawling() const
{
	return FRotator{};
}

float UCamperMovementComponent::GetDropStaggerTimeLeft() const
{
	return 0.0f;
}

FRotator UCamperMovementComponent::GetDefaultRotationRate() const
{
	return FRotator{};
}

UCamperMovementComponent::UCamperMovementComponent()
{
	this->MaxCrawlSpeed = 70.000000;
	this->MaxRunSpeed = 400.000000;
	this->_dropStaggerDuration = NULL;
	this->_dropStaggerMaxSpeed = NULL;
}
