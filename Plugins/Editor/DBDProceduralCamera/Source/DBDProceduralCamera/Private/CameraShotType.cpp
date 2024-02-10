#include "CameraShotType.h"
#include "Components/SplineComponent.h"

ACameraShotType::ACameraShotType()
{
	this->bIsCameraRotationFixed = false;
	this->MinimumDistanceFromCamera = 0.000000;
	this->MaximumDistanceFromCamera = 0.000000;
	this->HorizontalAngleFreedom = 0.000000;
	this->VerticalAngleFreedom = 0.000000;
	this->CameraMotionType = Static;
	this->KeyPoseNumber = 2;
	this->CameraTrack = CreateDefaultSubobject<USplineComponent>(TEXT("CameraTrack"));
}
