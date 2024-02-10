#include "ElementSpawnConditionsData.h"

FElementSpawnConditionsData::FElementSpawnConditionsData()
{
	this->Name = NAME_None;
	this->DependencyElementConditions = TMap<ETileSpawnPointType, FSpawnConditions>();
	this->GameplayElementConditions = TMap<EGameplayElementType, FSpawnConditions>();
	this->OtherSelvesConditions = FSpawnConditions{};
}
