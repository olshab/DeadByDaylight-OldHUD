#include "S38P03.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

float US38P03::GetHasteDurationAtLevel() const
{
	return 0.0f;
}

void US38P03::Authority_OnPickSelfUp(FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void US38P03::Authority_OnPerkActivated(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void US38P03::Authority_OnExitGatesPowered(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

US38P03::US38P03()
{
	this->_onGroundEffectClass = NULL;
	this->_hasteDuration = 0.000000;
	this->_interactionBP = NULL;
	this->_perkInteraction = NULL;
}
