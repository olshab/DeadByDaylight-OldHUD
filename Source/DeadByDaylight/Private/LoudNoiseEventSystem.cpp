#include "LoudNoiseEventSystem.h"

ULoudNoiseEventSystem::ULoudNoiseEventSystem()
{
	this->_requiredPlayerStateTags = TArray<FGameplayTag>();
	this->_preventativePlayerStateTags = TArray<FGameplayTag>();
}
