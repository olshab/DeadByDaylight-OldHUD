#include "SpawnStatusEffectsOnKillerAddon.h"

USpawnStatusEffectsOnKillerAddon::USpawnStatusEffectsOnKillerAddon()
{
	this->_statusEffectsToSpawn = TArray<FStatusEffectsProperties>();
	this->_imposedStatusEffects = TArray<TWeakObjectPtr<UStatusEffect>>();
}
