#include "KillerPOVSurvivorAimOffsetOverrideData.h"

FKillerPOVSurvivorAimOffsetOverrideData::FKillerPOVSurvivorAimOffsetOverrideData()
{
	this->PresenceTag = FGameplayTag{};
	this->_heightOffset = 0.0f;
	this->_offsetPercentagePerDotProductCurve = NULL;
	this->_conditionalTagsRequired = TArray<FGameplayTag>();
	this->ConditionalTagsPreventing = TArray<FGameplayTag>();
}
