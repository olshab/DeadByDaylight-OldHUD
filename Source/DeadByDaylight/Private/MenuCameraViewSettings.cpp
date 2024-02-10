#include "MenuCameraViewSettings.h"

FMenuCameraViewSettings::FMenuCameraViewSettings()
{
	this->FieldOfView = 0.0f;
	this->AspectRatio = 0.0f;
	this->ConstrainAspectRatio = false;
	this->UseFieldOfViewForLOD = false;
}
