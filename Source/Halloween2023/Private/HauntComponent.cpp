#include "HauntComponent.h"
#include "EHalloweenWorldType.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UHauntComponent::OnRep_IsInteractable()
{

}

void UHauntComponent::OnPlayerLeftZone(ADBDPlayer* player)
{

}

void UHauntComponent::OnPlayerEnterZone(ADBDPlayer* player)
{

}

void UHauntComponent::OnLevelReadyToPlay()
{

}

void UHauntComponent::OnEventComponentsCreated()
{

}

EHalloweenWorldType UHauntComponent::GetHalloweenWorldType() const
{
	return EHalloweenWorldType::Surface;
}

void UHauntComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UHauntComponent, _winningPlayerRole);
	DOREPLIFETIME(UHauntComponent, _isInteractable);
}

UHauntComponent::UHauntComponent()
{
	this->_winningPlayerRole = EPlayerRole::VE_None;
	this->_isInteractable = false;
	this->_offeringEffectTypeNeeded = EOfferingEffectType::Invalid;
	this->_stateTagsPreventingInteraction = TArray<FGameplayTag>();
	this->_slasherInZoneTracker = NULL;
	this->_survivorsInZoneTracker = NULL;
}
