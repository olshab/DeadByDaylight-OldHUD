#include "HangTimesPerStep.h"

FHangTimesPerStep::FHangTimesPerStep()
{
	this->SourceName = TEXT("");
	this->StepName = TEXT("");
	this->PossibleHangTime = 0.0f;
	this->HardCapTimeout = 0.0f;
	this->TimeCapWithoutProgress = 0.0f;
}
