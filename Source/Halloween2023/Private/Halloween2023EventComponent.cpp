#include "Halloween2023EventComponent.h"
#include "EVoidEnergyChangeReason.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;
class ULinkedTeleporterComponent;

void UHalloween2023EventComponent::PlayerDreamStateChanged(bool isInDreamWorld, bool locallyObservedChanged)
{

}

void UHalloween2023EventComponent::OnVoidZoneAboutToCloseWarning()
{

}

void UHalloween2023EventComponent::OnRep_PlayersInVoid()
{

}

void UHalloween2023EventComponent::OnPlayerAdded(ADBDPlayer* player)
{

}

void UHalloween2023EventComponent::OnLocallyObservedChanged()
{

}

void UHalloween2023EventComponent::Multicast_OnVoidZoneOpen_Implementation()
{

}

void UHalloween2023EventComponent::Multicast_OnVoidZoneClose_Implementation()
{

}

void UHalloween2023EventComponent::Multicast_OnMoriBegin_Implementation()
{

}

void UHalloween2023EventComponent::Authority_TurnAllRiftsIntoTeleporters(bool turnOnTeleporters)
{

}

void UHalloween2023EventComponent::Authority_PlayerTeleportedOutOfVoidZone(ADBDPlayer* playerTeleported, ULinkedTeleporterComponent* teleporterUsed)
{

}

void UHalloween2023EventComponent::Authority_PlayerTeleportedInToVoidZone(ADBDPlayer* playerTeleported, ULinkedTeleporterComponent* teleporterUsed)
{

}

void UHalloween2023EventComponent::Authority_PlayerPreTeleportOutOfVoidZone(ADBDPlayer* playerTeleported)
{

}

void UHalloween2023EventComponent::Authority_PlayerPreTeleportInToVoidZone(ADBDPlayer* playerTeleported)
{

}

void UHalloween2023EventComponent::Authority_OpenVoidZone(bool closeVoidAfterTimer)
{

}

void UHalloween2023EventComponent::Authority_OnVoidEnergyDeposited(const int32 amountDeposited, EVoidEnergyChangeReason changeReason)
{

}

void UHalloween2023EventComponent::Authority_OnLevelReadyToPlay()
{

}

void UHalloween2023EventComponent::Authority_OnComponentsAdded()
{

}

void UHalloween2023EventComponent::Authority_ForceTeleportPlayersOutOfVoidZone()
{

}

void UHalloween2023EventComponent::Authority_CloseVoidZone()
{

}

void UHalloween2023EventComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UHalloween2023EventComponent, _playersInVoid);
	DOREPLIFETIME(UHalloween2023EventComponent, _debugLogTimer);
}

UHalloween2023EventComponent::UHalloween2023EventComponent()
{
	this->_durationToKeepVoidZoneOpenForMori = 15.000000;
	this->_voidWorldTeleporterBP = NULL;
	this->_voidWorldHauntBP = NULL;
	this->_stunInteractionClass = NULL;
	this->_voidZonePlayerComponentClass = NULL;
	this->_unstableRifts = TArray<AUnstableRift*>();
	this->_playersInVoid = TArray<ADBDPlayer*>();
	this->_previousPlayersInVoidZone = TArray<ADBDPlayer*>();
	this->_voidWorldHauntInteractionClass = NULL;
	this->_statusEffectClassesToApplyToKillersOnEnterVoid = TArray<TSubclassOf<UStatusEffect>>();
	this->_statusEffectClassesToApplyToSurvivorsOnEnterVoid = TArray<TSubclassOf<UStatusEffect>>();
	this->_localPlayerTracker = NULL;
	this->_debugLogTimer = NULL;
}
