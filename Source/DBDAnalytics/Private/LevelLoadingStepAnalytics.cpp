#include "LevelLoadingStepAnalytics.h"

FLevelLoadingStepAnalytics::FLevelLoadingStepAnalytics()
{
	this->MatchId = TEXT("");
	this->MapName = TEXT("");
	this->Seed = 0;
	this->TimeElapsed = 0.0f;
	this->TimeElapsedInStep = 0.0f;
	this->LoadingStep = TEXT("");
	this->IsTimeout = false;
}
