#include "K32ItemBoxManagerComponent.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UK32ItemBoxManagerComponent::Authority_OnLevelReadyToPlay()
{

}

void UK32ItemBoxManagerComponent::Authority_OnItemBoxDeactivated(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

UK32ItemBoxManagerComponent::UK32ItemBoxManagerComponent()
{
	this->_itemBoxes = TArray<AK32ItemBox*>();
}
