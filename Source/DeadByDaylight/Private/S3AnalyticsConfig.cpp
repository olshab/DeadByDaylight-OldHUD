#include "S3AnalyticsConfig.h"

FS3AnalyticsConfig::FS3AnalyticsConfig()
{
	this->GameInitVerbose = false;
	this->GameConsoleLogMinimumVerbosity = TEXT("");
	this->MaxFramesUntilSend = 0;
	this->MaxTrackedRecurrences = 0;
	this->ScoreTypeWhitelist = TArray<FString>();
	this->ScoreTypeWhitelist_IsSet = false;
	this->ScoreTypeBlacklist = TArray<FString>();
	this->ScoreTypeBlacklist_IsSet = false;
	this->DetailedScoreTypeWhitelist = TArray<FString>();
	this->DetailedScoreTypeWhitelist_IsSet = false;
	this->DetailedScoreTypeBlacklist = TArray<FString>();
	this->DetailedScoreTypeBlacklist_IsSet = false;
	this->PerformanceSamplingRate = 0;
	this->PerformanceSamplingWhitelist = TArray<FString>();
	this->PerformanceSamplingWhitelist_IsSet = false;
	this->PerformanceContextWhitelist = TArray<FString>();
	this->PerformanceContextWhitelist_IsSet = false;
	this->PerformanceSamplingRule = TEXT("");
}
