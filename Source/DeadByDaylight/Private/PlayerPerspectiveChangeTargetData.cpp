#include "PlayerPerspectiveChangeTargetData.h"

FPlayerPerspectiveChangeTargetData::FPlayerPerspectiveChangeTargetData()
{
	this->IsAFirstPersonView = false;
	this->SceneComponent = NULL;
	this->CameraDistanceFromFPVLocationToToggleFPVOnPlayer = 0.0f;
	this->SocketNameOnSceneComponent = NAME_None;
	this->Offset = FVector{};
}
