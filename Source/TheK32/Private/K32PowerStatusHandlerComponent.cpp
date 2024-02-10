#include "K32PowerStatusHandlerComponent.h"
#include "K32SurvivorStatus.h"
#include "Net/UnrealNetwork.h"

class ACamperPlayer;

void UK32PowerStatusHandlerComponent::OnRep_SurvivorStatusList(TArray<FK32SurvivorStatus> oldSurvivorStatus)
{

}

void UK32PowerStatusHandlerComponent::OnIntroCompleted()
{

}

void UK32PowerStatusHandlerComponent::Multicast_SurvivorScream_Implementation(ACamperPlayer* survivor)
{

}

void UK32PowerStatusHandlerComponent::Multicast_OnInRangeOfAssimilationSpreadingSurvivor_Implementation(const ACamperPlayer* originatingSurvivor, const ACamperPlayer* targetSurvivor)
{

}

void UK32PowerStatusHandlerComponent::Multicast_OnAssimilationSpreadingToSurvivor_Implementation(const ACamperPlayer* originatingSurvivor, const ACamperPlayer* targetSurvivor)
{

}

void UK32PowerStatusHandlerComponent::Authority_OnSurvivorAdded(ACamperPlayer* survivor)
{

}

void UK32PowerStatusHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK32PowerStatusHandlerComponent, _survivorStatusList);
}

UK32PowerStatusHandlerComponent::UK32PowerStatusHandlerComponent()
{
	this->_lineOfSightTraceSphereSize = 10.000000;
	this->_survivorProjectileTargetSocketName = TEXT("joint_Pelvis_01");
	this->_traceProfile = TEXT("Projectile");
	this->_maxOldSurvivorLocations = 5;
	this->_survivorLocationOverlapAvoidanceDistance = 10.000000;
	this->_survivorStatusList = TArray<FK32SurvivorStatus>();
	this->_assimilationCooldownTimers = TMap<ACamperPlayer*, FFastTimer>();
	this->_survivorTagsToPreventPositionStorage = TArray<FGameplayTag>();
}
