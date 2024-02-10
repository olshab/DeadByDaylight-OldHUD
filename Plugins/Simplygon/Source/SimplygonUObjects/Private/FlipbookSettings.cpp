#include "FlipbookSettings.h"

FFlipbookSettings::FFlipbookSettings()
{
	this->NumberOfViews = 0;
	this->ViewDirection = FVector{};
	this->UpVector = FVector{};
	this->NumberOfColumns = 0;
	this->NumberOfRows = 0;
	this->FlipRowColumnOrder = false;
	this->OverrideFlipbookTextureWidth = 0;
	this->PivotAroundOrigin = false;
}
