#include "Addon_TheBlight_20.h"
#include "Net/UnrealNetwork.h"

void UAddon_TheBlight_20::OnRep_PowerCooldownTimer()
{

}

void UAddon_TheBlight_20::OnRep_BlightPowerStateComponent()
{

}

void UAddon_TheBlight_20::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UAddon_TheBlight_20, _powerCooldownTimer);
	DOREPLIFETIME(UAddon_TheBlight_20, _blightPowerStateComponent);
}

UAddon_TheBlight_20::UAddon_TheBlight_20()
{
	this->_powerCooldownTimer = NULL;
	this->_blightPowerStateComponent = NULL;
}
