#pragma once

#include "CoreMinimal.h"
#include "RandomRewardsData.h"
#include "RandomRewards.generated.h"

USTRUCT()
struct FRandomRewards
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FRandomRewardsData> RandomRewards;

	UPROPERTY(SkipSerialization)
	bool RandomRewards_IsSet;

public:
	DEADBYDAYLIGHT_API FRandomRewards();
};

FORCEINLINE uint32 GetTypeHash(const FRandomRewards) { return 0; }
