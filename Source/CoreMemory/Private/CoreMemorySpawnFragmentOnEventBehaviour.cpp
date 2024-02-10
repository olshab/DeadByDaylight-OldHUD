#include "CoreMemorySpawnFragmentOnEventBehaviour.h"

UCoreMemorySpawnFragmentOnEventBehaviour::UCoreMemorySpawnFragmentOnEventBehaviour()
{
	this->_spawnFragmentOnGameEvents = TArray<FGameplayTag>();
	this->_onlyForKiller = false;
	this->_onlyForSurvivors = false;
}
