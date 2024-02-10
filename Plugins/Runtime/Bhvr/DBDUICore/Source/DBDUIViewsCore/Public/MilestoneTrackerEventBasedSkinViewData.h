#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "MilestoneTrackerEventBasedSkinViewData.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FMilestoneTrackerEventBasedSkinViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInstance> MilestoneTrackerBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInstance> MilestoneTrackerHighlightBar;

public:
	DBDUIVIEWSCORE_API FMilestoneTrackerEventBasedSkinViewData();
};

FORCEINLINE uint32 GetTypeHash(const FMilestoneTrackerEventBasedSkinViewData) { return 0; }
