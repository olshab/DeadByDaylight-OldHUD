#include "K32KillerPodSpawnData.h"

FK32KillerPodSpawnData::FK32KillerPodSpawnData()
{
	this->InputData = FK32KillerPodSpawningInputData{};
	this->CollisionPoint = FVector{};
	this->SpawnLocation = FVector{};
	this->SpawnForwardRotation = FRotator{};
	this->SurfaceNormal = FVector{};
}
