#include "ChaseeCharacterComponent.h"
#include "Net/UnrealNetwork.h"

class UChargeableComponent;

void UChaseeCharacterComponent::Authority_OnLevelReadyToPlay()
{

}

void UChaseeCharacterComponent::Authority_OnGeneratorPercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete)
{

}

void UChaseeCharacterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UChaseeCharacterComponent, _totalChaseTimeThisMatchDebugReplicated);
}

UChaseeCharacterComponent::UChaseeCharacterComponent()
{
	this->_totalChaseTimeThisMatchDebugReplicated = 0.000000;
}
