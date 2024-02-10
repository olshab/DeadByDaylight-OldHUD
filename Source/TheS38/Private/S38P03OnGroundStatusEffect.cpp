#include "S38P03OnGroundStatusEffect.h"
#include "ECamperDamageState.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void US38P03OnGroundStatusEffect::Authority_OnPickSelfUp(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void US38P03OnGroundStatusEffect::Authority_OnCamperHealthChange(ECamperDamageState oldDamageState, ECamperDamageState newDamageState)
{

}

void US38P03OnGroundStatusEffect::Authority_HealSelf()
{

}

US38P03OnGroundStatusEffect::US38P03OnGroundStatusEffect()
{
	this->_hasteStatusEffectClass = NULL;
	this->_hastePercentage = 0.500000;
	this->_hasteStatusEffect = NULL;
}
