#include "LullabyKillerData.h"

FLullabyKillerData::FLullabyKillerData()
{
	this->KillerPresenceTag = FGameplayTag{};
	this->KillerLullabyActivationState = FGameplayTag{};
	this->SurvivorLullabyActivationState = FGameplayTag{};
	this->KillerLullabyDistance = 0.0f;
}
