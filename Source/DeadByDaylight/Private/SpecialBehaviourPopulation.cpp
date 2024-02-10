#include "SpecialBehaviourPopulation.h"

FSpecialBehaviourPopulation::FSpecialBehaviourPopulation()
{
	this->_name = NAME_None;
	this->_spawnerTypes = TArray<EGameplayElementType>();
	this->_spawnPointTypes = TArray<ETileSpawnPointType>();
	this->_actor = NULL;
	this->_tileSpawnPointPriority = 0;
	this->IterativeWeightAdjustmentStrategyClass = NULL;
}
