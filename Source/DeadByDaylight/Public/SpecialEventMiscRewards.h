#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.h"
#include "SpecialEventMiscRewards.generated.h"

USTRUCT()
struct FSpecialEventMiscRewards
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Id;

	UPROPERTY()
	TArray<FRewardResponseItem> Rewards;

public:
	DEADBYDAYLIGHT_API FSpecialEventMiscRewards();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventMiscRewards) { return 0; }
