#include "BaseSnowmanEventComponent.h"

UBaseSnowmanEventComponent::UBaseSnowmanEventComponent()
{
	this->_snowmanSpawnPlacementStrategyClass = NULL;
	this->_snowmanSpawnPlacementStrategy = NULL;
	this->_survivorInSnowmanEffectClasses = TArray<TSubclassOf<UStatusEffect>>();
	this->_killerInSnowmanEffectClasses = TArray<TSubclassOf<UStatusEffect>>();
}
