#include "K32KillerPodSettings.h"

FK32KillerPodSettings::FK32KillerPodSettings()
{
	this->CollisionPoint = FVector{};
	this->SpawnLocation = FVector{};
	this->SpawnForwardRotation = FRotator{};
	this->LastForwardRotation = FRotator{};
	this->IsVisible = false;
	this->IsDisabled = false;
	this->IsControlledByKiller = false;
	this->IsLastControlledKillerPod = false;
	this->SurfaceNormal = FVector{};
	this->AttachmentPoints = TArray<FVector>();
}
