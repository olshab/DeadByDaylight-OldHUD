#pragma once

#include "CoreMinimal.h"
#include "EPrestigeRewardType.h"
#include "PrestigeRewardStruct.generated.h"

USTRUCT()
struct FPrestigeRewardStruct
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString RewardId;

	UPROPERTY(EditAnywhere)
	EPrestigeRewardType RewardType;

	UPROPERTY(EditAnywhere)
	int32 RewardPerkLevel;

public:
	DEADBYDAYLIGHT_API FPrestigeRewardStruct();
};

FORCEINLINE uint32 GetTypeHash(const FPrestigeRewardStruct) { return 0; }
