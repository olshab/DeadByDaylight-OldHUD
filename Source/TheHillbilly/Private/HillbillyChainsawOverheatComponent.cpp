#include "HillbillyChainsawOverheatComponent.h"
#include "Net/UnrealNetwork.h"
#include "PowerChargeComponent.h"

void UHillbillyChainsawOverheatComponent::OnRep_IsChainsawOverheating() const
{

}

void UHillbillyChainsawOverheatComponent::OnLevelReadyToPlay()
{

}

bool UHillbillyChainsawOverheatComponent::IsChainsawOverheating() const
{
	return false;
}

void UHillbillyChainsawOverheatComponent::Authority_OnHeatChargeFull() const
{

}

void UHillbillyChainsawOverheatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UHillbillyChainsawOverheatComponent, _overheatTimer);
	DOREPLIFETIME(UHillbillyChainsawOverheatComponent, _isChainsawOverheating);
}

UHillbillyChainsawOverheatComponent::UHillbillyChainsawOverheatComponent()
{
	this->_overheatTimer = NULL;
	this->_chainsawHeatCharge = CreateDefaultSubobject<UPowerChargeComponent>(TEXT("ChainsawOverheatCharge"));
	this->_overheatStatusEffectClass = NULL;
}
