#include "TileEventSpawnerSettingData.h"

FTileEventSpawnerSettingData::FTileEventSpawnerSettingData()
{
	this->TileType = ETileType::None;
	this->IsExitGate = false;
	this->SpawnProbability = 0.0f;
	this->MinBudget = 0.0f;
	this->MaxBudget = 0.0f;
	this->SpawnRequirementsPerSize = TArray<FEventSpawnableSpawnRequirements>();
}
