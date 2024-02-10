#include "VoidZonePlayerComponent.h"

void UVoidZonePlayerComponent::Authority_OnInteractionEnd()
{

}

UVoidZonePlayerComponent::UVoidZonePlayerComponent()
{
	this->_voidWorldStatusEffects = TArray<UStatusEffect*>();
	this->_lastVoidZoneTeleporterUsed = NULL;
	this->_voidWorldHauntInteractionStatusEffect = NULL;
	this->_playerEventDispatcher = NULL;
	this->_stateTagsWaitForInteractionEndOnVoidClose = TArray<FGameplayTag>();
	this->_owningPlayerInteraction = NULL;
}
