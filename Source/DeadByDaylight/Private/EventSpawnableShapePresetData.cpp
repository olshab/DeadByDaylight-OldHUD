#include "EventSpawnableShapePresetData.h"

FEventSpawnableShapePresetData::FEventSpawnableShapePresetData()
{
	this->Name = NAME_None;
	this->MinBound = FVector{};
	this->MaxBound = FVector{};
	this->SpawnPriorityTier = 0;
}
