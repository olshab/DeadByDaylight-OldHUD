#include "K32KillerPodSpawningData.h"

FK32KillerPodSpawningData::FK32KillerPodSpawningData()
{
	this->CollisionPoint = FVector{};
	this->SpawnLocation = FVector{};
	this->SpawnForwardRotation = FRotator{};
	this->SurfaceNormal = FVector{};
	this->PodToDestroy = NULL;
	this->TargetSurvivor = NULL;
}
