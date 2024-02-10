#pragma once

#include "CoreMinimal.h"
#include "MilestoneTrackerItemViewData.h"
#include "MilestoneTrackerUpdateItemViewData.generated.h"

USTRUCT(BlueprintType)
struct FMilestoneTrackerUpdateItemViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 index;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMilestoneTrackerItemViewData updatedViewData;

public:
	DBDUIVIEWINTERFACES_API FMilestoneTrackerUpdateItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const FMilestoneTrackerUpdateItemViewData) { return 0; }
