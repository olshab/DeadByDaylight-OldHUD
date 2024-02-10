#include "S38P01.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "GameEventData.h"

class ACollectable;

void US38P01::Multicast_OnSecondaryPerkEffect_Implementation(bool shouldScream)
{

}

void US38P01::Multicast_OnAnimationStart_Implementation()
{

}

TArray<FName> US38P01::GetUnsupportedItemAddons() const
{
	return TArray<FName>();
}

float US38P01::GetHasteDuration() const
{
	return 0.0f;
}

float US38P01::GetHasteAmount() const
{
	return 0.0f;
}

float US38P01::GetExposedDuration() const
{
	return 0.0f;
}

float US38P01::GetExhaustionDurationAtLevel() const
{
	return 0.0f;
}

TArray<TSubclassOf<ACollectable>> US38P01::GetCollectableClasses() const
{
	return TArray<TSubclassOf<ACollectable>>();
}

void US38P01::Authority_OnPerkActivated(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void US38P01::Authority_OnAnimationFinish()
{

}

void US38P01::Authority_GiveSecondaryPerkEffect()
{

}

US38P01::US38P01()
{
	this->_S38P01AnimInstance = NULL;
	this->_exposedStatusEffectClass = NULL;
	this->_exposedEffect = NULL;
	this->_exposedDuration = 4.000000;
	this->_hasteStatusEffectClass = NULL;
	this->_hasteEffect = NULL;
	this->_hasteAmount = 0.500000;
	this->_hasteDuration = 2.000000;
	this->_exhaustionEffectClass = NULL;
	this->_exhaustionEffect = NULL;
	this->_exhaustionDuration = 0.000000;
	this->_collectableClasses = TArray<TSubclassOf<ACollectable>>();
	this->_unsupportedItemAddons = TArray<FName>();
	this->_interactionBP = NULL;
	this->_animationDuration = 0.500000;
}
