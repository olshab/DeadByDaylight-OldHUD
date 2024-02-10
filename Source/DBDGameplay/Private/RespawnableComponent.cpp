#include "RespawnableComponent.h"
#include "Net/UnrealNetwork.h"

void URespawnableComponent::OnRep_OnLocationChanged()
{

}

void URespawnableComponent::OnLevelReadyToPlay()
{

}

void URespawnableComponent::OnDespawnCosmeticsComplete()
{

}

bool URespawnableComponent::Authority_TryTeleport()
{
	return false;
}

void URespawnableComponent::Authority_OnTimerDone()
{

}

void URespawnableComponent::Authority_OnMinRespawnTimerDone()
{

}

void URespawnableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(URespawnableComponent, _actorLocation);
	DOREPLIFETIME(URespawnableComponent, _debugLogTimer);
}

URespawnableComponent::URespawnableComponent()
{
	this->_hasStartedRespawning = false;
	this->_hasExceededMinRespawnTime = true;
	this->_gameplayElementSpawnType = EGameplayElementType::Generic;
	this->_tileSpawnType = ETileSpawnPointType::Unspecified;
	this->_actorSpawnerInUse = NULL;
	this->_tileSpawnInUse = NULL;
	this->_usesTimers = true;
	this->_disappearDuration = 1.000000;
	this->_minTimeBetweenRespawns = 2.000000;
	this->_spawnHeightOffset = 0.000000;
	this->_usesGameplayElementSpawner = false;
	this->_collisionCapsuleHalfHeight = 44.000000;
	this->_collisionCapsuleRadius = 22.000000;
	this->_debugLogTimer = NULL;
	this->_onlyLimitDistanceBetweenSameActorType = false;
	this->_collisionChannelsToCheckOnRespawn = TArray<TEnumAsByte<ECollisionChannel>>();
}
