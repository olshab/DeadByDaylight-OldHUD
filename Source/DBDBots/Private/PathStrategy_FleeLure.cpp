#include "PathStrategy_FleeLure.h"

UPathStrategy_FleeLure::UPathStrategy_FleeLure()
{
	this->MaximumRangeToLureableDangerObject = 2000.000000;
	this->MaxActiveTimeSecondsEndgame = 5.000000;
	this->LostFocusInteractionIds = TArray<FString>();
}
