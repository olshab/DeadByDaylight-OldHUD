#include "ScreenIndicatorViewData.h"

FScreenIndicatorViewData::FScreenIndicatorViewData()
{
	this->Id = TEXT("");
	this->IndicatorType = EHudScreenIndicatorType::None;
	this->ViewportSize = FVector2D{};
	this->IsInFront = false;
	this->ScreenPosition = FVector2D{};
	this->Distance = 0.0f;
	this->AdditionalData = NULL;
}
