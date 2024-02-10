#include "LinkedTeleporterComponent.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

class ADBDPlayer;

void ULinkedTeleporterComponent::OnVoidZoneAboutToClose()
{

}

void ULinkedTeleporterComponent::OnTimerEnd(ADBDPlayer* player)
{

}

void ULinkedTeleporterComponent::OnTeleporterTriggered(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void ULinkedTeleporterComponent::OnRep_IsAllowedToTeleport()
{

}

void ULinkedTeleporterComponent::OnLevelReadyToPlay()
{

}

void ULinkedTeleporterComponent::OnEventComponentsSpawned()
{

}

void ULinkedTeleporterComponent::Multicast_TeleportPlayer_Implementation(ADBDPlayer* player, const FVector teleportLocation)
{

}

void ULinkedTeleporterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ULinkedTeleporterComponent, _linkedTeleporter);
	DOREPLIFETIME(ULinkedTeleporterComponent, _isAllowedToTeleport);
}

ULinkedTeleporterComponent::ULinkedTeleporterComponent()
{
	this->_linkedTeleporter = NULL;
	this->_survivorTagsPreventingTeleport = TArray<FGameplayTag>();
	this->_killerTagsPreventingTeleport = TArray<FGameplayTag>();
	this->_isAllowedToTeleport = false;
	this->_forceCamperDropSpecialItemOnTeleport = true;
}
