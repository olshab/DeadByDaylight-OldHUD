#pragma once

#include "CoreMinimal.h"
#include "RewardWrapperViewData.h"
#include "AlertsViewData.generated.h"

USTRUCT(BlueprintType)
struct FAlertsViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardWrapperViewData> AlertRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AlertHeader;

public:
	DBDUIVIEWINTERFACES_API FAlertsViewData();
};

FORCEINLINE uint32 GetTypeHash(const FAlertsViewData) { return 0; }
