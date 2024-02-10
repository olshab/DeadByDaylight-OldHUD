#include "MenuCameraView.h"

FMenuCameraView::FMenuCameraView()
{
	this->Location = FVector{};
	this->Rotation = FRotator{};
	this->Override_Settings = false;
	this->Settings = FMenuCameraViewSettings{};
}
