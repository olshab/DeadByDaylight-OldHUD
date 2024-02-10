#include "ScreenshotToolTarget.h"

FScreenshotToolTarget::FScreenshotToolTarget()
{
	this->Category = EScreenshotToolTargetCategory::None;
	this->Subcategory = EScreenshotToolTargetSubCategory::None;
	this->RawData = TEXT("");
}
