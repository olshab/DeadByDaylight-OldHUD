#pragma once

#include "CoreMinimal.h"
#include "S3AnalyticsConfig.generated.h"

USTRUCT()
struct FS3AnalyticsConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool GameInitVerbose;

	UPROPERTY()
	FString GameConsoleLogMinimumVerbosity;

	UPROPERTY()
	uint32 MaxFramesUntilSend;

	UPROPERTY()
	int32 MaxTrackedRecurrences;

	UPROPERTY()
	TArray<FString> ScoreTypeWhitelist;

	UPROPERTY(SkipSerialization)
	bool ScoreTypeWhitelist_IsSet;

	UPROPERTY()
	TArray<FString> ScoreTypeBlacklist;

	UPROPERTY(SkipSerialization)
	bool ScoreTypeBlacklist_IsSet;

	UPROPERTY()
	TArray<FString> DetailedScoreTypeWhitelist;

	UPROPERTY(SkipSerialization)
	bool DetailedScoreTypeWhitelist_IsSet;

	UPROPERTY()
	TArray<FString> DetailedScoreTypeBlacklist;

	UPROPERTY(SkipSerialization)
	bool DetailedScoreTypeBlacklist_IsSet;

	UPROPERTY()
	uint32 PerformanceSamplingRate;

	UPROPERTY()
	TArray<FString> PerformanceSamplingWhitelist;

	UPROPERTY(SkipSerialization)
	bool PerformanceSamplingWhitelist_IsSet;

	UPROPERTY()
	TArray<FString> PerformanceContextWhitelist;

	UPROPERTY(SkipSerialization)
	bool PerformanceContextWhitelist_IsSet;

	UPROPERTY()
	FString PerformanceSamplingRule;

public:
	DEADBYDAYLIGHT_API FS3AnalyticsConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3AnalyticsConfig) { return 0; }
