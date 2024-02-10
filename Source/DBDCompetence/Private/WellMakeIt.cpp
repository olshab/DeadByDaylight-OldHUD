#include "WellMakeIt.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

float UWellMakeIt::GetPerkDurationAtLevel() const
{
	return 0.0f;
}

float UWellMakeIt::GetHealingSpeed() const
{
	return 0.0f;
}

void UWellMakeIt::Authority_OnUnHook(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

UWellMakeIt::UWellMakeIt()
{
	this->_wellMakeItNotificationEffectClass = NULL;
	this->_wellMakeItEffectClass = NULL;
	this->_healingSpeed = 1.000000;
	this->_perkDuration = 0.000000;
}
