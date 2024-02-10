#include "DependencyElementAddition.h"

FDependencyElementAddition::FDependencyElementAddition()
{
	this->_object = NULL;
	this->_type = ETileSpawnPointType::Unspecified;
	this->_numberToAdd = 0;
	this->_spawnOrder = 0;
	this->_elementSpawnConditionsName = FDataTableDropdown{};
	this->_elementTag = FGameplayTag{};
	this->_allowFallback = false;
}
