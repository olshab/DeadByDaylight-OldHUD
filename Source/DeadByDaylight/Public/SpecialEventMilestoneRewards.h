#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.h"
#include "SpecialEventMilestoneRewards.generated.h"

USTRUCT()
struct FSpecialEventMilestoneRewards
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 PointsCost;

	UPROPERTY()
	TArray<FRewardResponseItem> Rewards;

public:
	DEADBYDAYLIGHT_API FSpecialEventMilestoneRewards();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventMilestoneRewards) { return 0; }
