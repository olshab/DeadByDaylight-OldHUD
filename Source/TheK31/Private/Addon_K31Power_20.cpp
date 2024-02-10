#include "Addon_K31Power_20.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UAddon_K31Power_20::OnRep_TargetDrone()
{

}

void UAddon_K31Power_20::Authority_OnTerrorRadiusLifetimeTimerDone()
{

}

void UAddon_K31Power_20::Authority_OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void UAddon_K31Power_20::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UAddon_K31Power_20, _targetDrone);
}

UAddon_K31Power_20::UAddon_K31Power_20()
{
	this->_terrorRadiusSize = 3200.000000;
	this->_terrorRadiusDuration = 15.000000;
	this->_allowedDroneStatesForEffectToApply = TArray<EK31DroneStateID>();
	this->_targetDrone = NULL;
	this->_terrorRadius = NULL;
	this->_indicatorEffectClass = NULL;
	this->_indicatorEffect = NULL;
	this->_undetectableEffectClass = NULL;
	this->_undetectableEffect = NULL;
}
