#include "ScreenshotToolViewOverridesData.h"

FScreenshotToolViewOverridesData::FScreenshotToolViewOverridesData()
{
	this->Settings = FScreenshotViewSetting{};
	this->Targets = TArray<FScreenshotToolTargetWithLabel>();
}
