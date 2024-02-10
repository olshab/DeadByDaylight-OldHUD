#include "PlayerPerspectiveChangeCameraMovementData.h"

FPlayerPerspectiveChangeCameraMovementData::FPlayerPerspectiveChangeCameraMovementData()
{
	this->InitialCameraRelativeLocation = FVector{};
	this->TargetCameraRelativeLocation = FVector{};
	this->ShouldForceLockCameraBehindPlayer = false;
	this->TransitionCurve = NULL;
	this->CameraMovementDuration = 0.0f;
}
