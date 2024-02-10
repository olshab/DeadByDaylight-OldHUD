#include "ScreenshotToolConfigurationAsset.h"

UScreenshotToolConfigurationAsset::UScreenshotToolConfigurationAsset()
{
	this->SceneSetupDelay = 5.000000;
	this->UpdateCameraFromViewSettings = true;
	this->AutoSelectActorInEditor = true;
	this->SaveAndCheckoutAssets = true;
	this->ExportAllIconsInOneFrame = false;
	this->IconsExportedPerFrame = 1;
	this->HookClasses = TArray<TSubclassOf<UObject>>();
}
