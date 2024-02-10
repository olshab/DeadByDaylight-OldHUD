#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.h"
#include "RandomRewardsData.generated.h"

USTRUCT()
struct FRandomRewardsData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString RewardId;

	UPROPERTY()
	TArray<FRewardResponseItem> Rewards;

public:
	DEADBYDAYLIGHT_API FRandomRewardsData();
};

FORCEINLINE uint32 GetTypeHash(const FRandomRewardsData) { return 0; }
