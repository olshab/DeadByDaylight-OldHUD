#pragma once

#include "CoreMinimal.h"
#include "LTEData.h"
#include "SpecialEventMiscRewards.h"
#include "SpecialEventMilestoneRewards.h"
#include "EventPeriod.h"
#include "RewardResponseItem.h"
#include "ScoreEventRewards.h"
#include "SpecialEventsData.generated.h"

USTRUCT()
struct FSpecialEventsData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString EventId;

	UPROPERTY()
	FLTEData LteData;

	UPROPERTY(SkipSerialization)
	bool LteData_IsSet;

	UPROPERTY()
	TArray<FSpecialEventMiscRewards> MiscRewards;

	UPROPERTY(SkipSerialization)
	bool MiscRewards_IsSet;

	UPROPERTY()
	TArray<FRewardResponseItem> OwnerRewards;

	UPROPERTY(SkipSerialization)
	bool OwnerRewards_IsSet;

	UPROPERTY()
	TArray<FScoreEventRewards> ScoreEventRewards;

	UPROPERTY(SkipSerialization)
	bool ScoreEventRewards_IsSet;

	UPROPERTY()
	TArray<FSpecialEventMilestoneRewards> MilestoneRewards;

	UPROPERTY(SkipSerialization)
	bool MilestoneRewards_IsSet;

	UPROPERTY()
	TArray<FEventPeriod> EventPeriods;

	UPROPERTY(SkipSerialization)
	bool EventPeriods_IsSet;

public:
	DEADBYDAYLIGHT_API FSpecialEventsData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventsData) { return 0; }
