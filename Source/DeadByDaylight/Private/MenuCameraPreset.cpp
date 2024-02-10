#include "MenuCameraPreset.h"

FMenuCameraPreset::FMenuCameraPreset()
{
	this->Views = TMap<EDBDCameraViewType, FMenuCameraView>();
	this->Targets = TArray<FMenuCameraViewTargetWithLabel>();
}
