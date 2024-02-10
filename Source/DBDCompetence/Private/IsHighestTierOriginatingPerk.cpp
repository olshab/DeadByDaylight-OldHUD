#include "IsHighestTierOriginatingPerk.h"

class UGameplayModifierContainer;
class UStatusEffect;

void UIsHighestTierOriginatingPerk::OnStatusEffectApplicableChanged(UGameplayModifierContainer* gameplayModifierContainer, bool isApplicable)
{

}

void UIsHighestTierOriginatingPerk::OnStatusEffectAddedOrRemoved(UStatusEffect* effect, bool valid)
{

}

void UIsHighestTierOriginatingPerk::OnGameplayModifierContainerInitialized()
{

}

UIsHighestTierOriginatingPerk::UIsHighestTierOriginatingPerk()
{
	this->_applicableEffects = TArray<UStatusEffect*>();
}
