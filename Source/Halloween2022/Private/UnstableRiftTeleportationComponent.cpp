#include "UnstableRiftTeleportationComponent.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"

void UUnstableRiftTeleportationComponent::OnRep_IsAllowedToTeleport()
{

}

void UUnstableRiftTeleportationComponent::Multicast_TeleportUnstableRift_Implementation(const FVector location)
{

}

void UUnstableRiftTeleportationComponent::Multicast_PreTeleportation_Implementation(const FVector& teleportLocation, const bool hadPlayerInteraction)
{

}

void UUnstableRiftTeleportationComponent::Authority_OnLevelReadyToPlay()
{

}

void UUnstableRiftTeleportationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UUnstableRiftTeleportationComponent, _isAllowedToTeleport);
}

UUnstableRiftTeleportationComponent::UUnstableRiftTeleportationComponent()
{
	this->_spawnPointType = ETileSpawnPointType::Unspecified;
	this->_actorSpawnerType = EGameplayElementType::Generic;
	this->_allUnstableRifts = TArray<AUnstableRift*>();
	this->_capsuleRadius = 22.000000;
	this->_capsuleHalfHeight = 44.000000;
	this->_ignoreTouches = true;
	this->_isAllowedToTeleport = true;
	this->_actorsInMapToAvoid = TArray<TSubclassOf<AActor>>();
	this->_minDistanceFromActorsToAvoid = 150.000000;
}
