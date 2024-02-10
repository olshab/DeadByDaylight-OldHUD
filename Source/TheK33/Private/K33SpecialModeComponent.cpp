#include "K33SpecialModeComponent.h"
#include "Net/UnrealNetwork.h"

void UK33SpecialModeComponent::OnRep_IsInSpecialMode()
{

}

void UK33SpecialModeComponent::OnRep_ChargeState()
{

}

void UK33SpecialModeComponent::OnPowerChargeChanged(const float currentChargePercent)
{

}

void UK33SpecialModeComponent::Authority_OnIntroCompleted()
{

}

void UK33SpecialModeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK33SpecialModeComponent, _isInSpecialMode);
	DOREPLIFETIME(UK33SpecialModeComponent, _chargeState);
}

UK33SpecialModeComponent::UK33SpecialModeComponent()
{
	this->_chargeState = EK33SpecialModeChargeState::Idle;
}
