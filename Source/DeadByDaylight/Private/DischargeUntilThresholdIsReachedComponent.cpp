#include "DischargeUntilThresholdIsReachedComponent.h"

class UChargeableComponent;

void UDischargeUntilThresholdIsReachedComponent::OnChargePercentChanged(UChargeableComponent* chargeableComponent, float totalPercentComplete)
{

}

void UDischargeUntilThresholdIsReachedComponent::Authority_OnChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete)
{

}

UDischargeUntilThresholdIsReachedComponent::UDischargeUntilThresholdIsReachedComponent()
{
	this->_chargeableComponent = NULL;
}
