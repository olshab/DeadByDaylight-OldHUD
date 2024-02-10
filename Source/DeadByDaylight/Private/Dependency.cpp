#include "Dependency.h"

FDependency::FDependency()
{
	this->Type = ETileSpawnPointType::Unspecified;
	this->AssetReference = FSoftObjectPath{};
	this->Object = NULL;
	this->Unique = false;
	this->Count = 0;
	this->_spawnConditionsName = NAME_None;
	this->_elementTag = FGameplayTag{};
	this->_allowFallback = false;
	this->_spawnOrder = 0;
	this->_iterativeWeightAdjustmentStrategyClass = NULL;
}
