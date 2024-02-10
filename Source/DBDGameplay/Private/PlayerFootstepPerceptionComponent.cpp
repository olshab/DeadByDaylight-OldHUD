#include "PlayerFootstepPerceptionComponent.h"

UPlayerFootstepPerceptionComponent::UPlayerFootstepPerceptionComponent()
{
	this->_allowFootstepsSeenPerkFlags = TArray<FGameplayTag>();
	this->_disallowFootstepsSeenPerkFlags = TArray<FGameplayTag>();
}
