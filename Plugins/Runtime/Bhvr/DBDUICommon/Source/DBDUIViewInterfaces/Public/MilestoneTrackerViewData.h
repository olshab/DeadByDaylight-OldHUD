#pragma once

#include "CoreMinimal.h"
#include "MilestoneTrackerItemViewData.h"
#include "MilestoneTrackerViewData.generated.h"

USTRUCT(BlueprintType)
struct FMilestoneTrackerViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMilestoneTrackerItemViewData> MilestoneRewardsList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UserMilestonePointData;

public:
	DBDUIVIEWINTERFACES_API FMilestoneTrackerViewData();
};

FORCEINLINE uint32 GetTypeHash(const FMilestoneTrackerViewData) { return 0; }
