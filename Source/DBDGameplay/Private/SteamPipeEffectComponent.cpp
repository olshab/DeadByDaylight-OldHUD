#include "SteamPipeEffectComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void USteamPipeEffectComponent::Authority_OnStoppedCrouching(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void USteamPipeEffectComponent::Authority_OnHealthStateChanged(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void USteamPipeEffectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USteamPipeEffectComponent, _isInActiveSteamPipeZone);
}

USteamPipeEffectComponent::USteamPipeEffectComponent()
{
	this->_hinderedEffectClass = NULL;
	this->_stateTagsToIgnore = TArray<FGameplayTag>();
	this->_overlappingSteamPipe = NULL;
}
