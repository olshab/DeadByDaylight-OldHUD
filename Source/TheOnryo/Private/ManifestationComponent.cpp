#include "ManifestationComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UManifestationComponent::OnRep_LingeringUndetectableEndTimeStamp()
{

}

void UManifestationComponent::OnRep_IsManifested()
{

}

void UManifestationComponent::OnLingeringUndetectableTimerCompleted()
{

}

void UManifestationComponent::OnLevelReadyToPlay()
{

}

void UManifestationComponent::Multicast_OnManifestationTransitionComplete_Implementation()
{

}

void UManifestationComponent::Multicast_OnManifestationChanged_Implementation(const bool isManifested, const bool isImmediateManifest)
{

}

void UManifestationComponent::Multicast_AttemptToPalletStunDemanifestedKiller_Implementation()
{

}

void UManifestationComponent::Authority_OnMoriStarted()
{

}

void UManifestationComponent::Authority_AttemptToPalletStunDemanifestedKiller(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void UManifestationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UManifestationComponent, _onryoVisibilityComponent);
	DOREPLIFETIME(UManifestationComponent, _isManifested);
	DOREPLIFETIME(UManifestationComponent, _lingeringUndetectableEndTimeStamp);
}

UManifestationComponent::UManifestationComponent()
{
	this->_unmanifestedUndetectableStatusEffectClass = NULL;
	this->_onryoVisibilityComponent = NULL;
	this->_onryoVisibilityComponentClass = NULL;
	this->_isManifested = false;
	this->_lingeringUndetectableEndTimeStamp = -1.000000;
	this->_unmanifestStatusEffect = NULL;
}
