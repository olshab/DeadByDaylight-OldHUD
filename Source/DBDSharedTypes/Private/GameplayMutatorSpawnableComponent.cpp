#include "GameplayMutatorSpawnableComponent.h"

FGameplayMutatorSpawnableComponent::FGameplayMutatorSpawnableComponent()
{
	this->Component = NULL;
	this->ShouldSpawnOnSurvivor = false;
	this->ShouldSpawnOnKiller = false;
	this->ShouldSpawnOnGameState = false;
	this->CustomParam = 0.0f;
}
