#include "CoreMemorySpawnedStatusEffectTrackerComponent.h"

class ACoreMemoryChallengePlayerSpecificController;
class UStatusEffect;

void UCoreMemorySpawnedStatusEffectTrackerComponent::Authority_AddSpawnedStatusEffect(UStatusEffect* statusEffect, ACoreMemoryChallengePlayerSpecificController* playerController)
{

}

UCoreMemorySpawnedStatusEffectTrackerComponent::UCoreMemorySpawnedStatusEffectTrackerComponent()
{
	this->_authority_spawnedStatusEffects = TArray<TWeakObjectPtr<UStatusEffect>>();
	this->_authority_imposeStatusEffectBehaviour = NULL;
}
