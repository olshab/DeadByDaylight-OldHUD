#include "PathBuilder.h"

UPathBuilder::UPathBuilder()
{
	this->PathReachedPointRadius = 70.000000;
	this->ToleratedTerrorPressure = EAITerrorLevel::None;
	this->OverridePreviousPathStrategy = false;
	this->MinimumValidPathTimeWhenPathReached = 0.000000;
	this->_path = NULL;
	this->_aiOwner = NULL;
}
