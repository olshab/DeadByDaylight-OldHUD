#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PostGameAnalyticsBase.generated.h"

USTRUCT()
struct FPostGameAnalyticsBase: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FString KrakenMatchId;

	UPROPERTY()
	FString GameMode;

	UPROPERTY()
	int32 BloodwebPoints;

	UPROPERTY()
	int32 BonusEvent;

	UPROPERTY()
	int32 MatchIncentive;

	UPROPERTY()
	int32 LteIncentive;

	UPROPERTY()
	float GameDuration;

	UPROPERTY()
	FString CharacterName;

	UPROPERTY()
	int32 Rank;

	UPROPERTY()
	int32 PipsGainedOrLost;

	UPROPERTY()
	FString MatchEndReason;

	UPROPERTY()
	bool IsTutorialBotMatch;

	UPROPERTY()
	FString OnboardingModeId;

	UPROPERTY()
	int32 OnboardingEnabled;

	UPROPERTY()
	int32 OnboardingABTestingEnabled;

	UPROPERTY()
	int32 OnboardingNumberActiveModes;

	UPROPERTY()
	int32 OnboardingNewAssignedMode;

	UPROPERTY()
	float ExactPing;

public:
	DBDANALYTICS_API FPostGameAnalyticsBase();
};

FORCEINLINE uint32 GetTypeHash(const FPostGameAnalyticsBase) { return 0; }
