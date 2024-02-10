#include "CameraShot.h"

FCameraShot::FCameraShot()
{
	this->CameraShotType = NULL;
	this->ShotDuration = 0.0f;
	this->PriorityWeight = 0.0f;
	this->TrackSamplingNumberForObstructionComputation = 0;
	this->ObstructionScore = 0.0f;
}
