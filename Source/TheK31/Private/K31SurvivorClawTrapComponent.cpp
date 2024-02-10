#include "K31SurvivorClawTrapComponent.h"
#include "Net/UnrealNetwork.h"
#include "ECamperDamageState.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

class AK31Power;
class AK31Drone;

void UK31SurvivorClawTrapComponent::OnRep_RemoveClawTrapInteraction()
{

}

void UK31SurvivorClawTrapComponent::OnRep_OriginatingPower(AK31Power* oldPower)
{

}

void UK31SurvivorClawTrapComponent::OnRep_IsTrapped()
{

}

void UK31SurvivorClawTrapComponent::OnRep_IsBroadcasting()
{

}

void UK31SurvivorClawTrapComponent::OnIntroCompleted()
{

}

void UK31SurvivorClawTrapComponent::OnCamperEscaped(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UK31SurvivorClawTrapComponent::Multicast_ClawTrapAddedByDrone_Implementation(AK31Drone* originatingDrone)
{

}

float UK31SurvivorClawTrapComponent::GetClawTrapCosmeticDelayDuration() const
{
	return 0.0f;
}

void UK31SurvivorClawTrapComponent::Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState)
{

}

void UK31SurvivorClawTrapComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK31SurvivorClawTrapComponent, _batteryChargeTimer);
	DOREPLIFETIME(UK31SurvivorClawTrapComponent, _originatingPower);
	DOREPLIFETIME(UK31SurvivorClawTrapComponent, _isTrapped);
	DOREPLIFETIME(UK31SurvivorClawTrapComponent, _isBroadcasting);
	DOREPLIFETIME(UK31SurvivorClawTrapComponent, _removeClawTrapInteraction);
	DOREPLIFETIME(UK31SurvivorClawTrapComponent, _wasLastRemovedAutomatically);
}

UK31SurvivorClawTrapComponent::UK31SurvivorClawTrapComponent()
{
	this->_batteryChargeTimer = NULL;
	this->_originatingPower = NULL;
	this->_isTrapped = false;
	this->_isBroadcasting = false;
	this->_removeClawTrapInteraction = NULL;
	this->_removeClawTrapInteractionClass = NULL;
	this->_clawTrap = NULL;
	this->_clawTrapClass = NULL;
	this->_clawTrapCosmeticDelayDuration = 0.500000;
	this->_clawTrapAttachSocket = NAME_None;
	this->_authority_playerZoneStatus = NULL;
	this->_wasLastRemovedAutomatically = false;
	this->_authority_originatingDrone = NULL;
}
