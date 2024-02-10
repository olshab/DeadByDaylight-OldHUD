#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "RewardWrapperViewData.h"
#include "SeasonEndRankRewardsPopupViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API USeasonEndRankRewardsPopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OldKillerRank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OldSurvivorRank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardWrapperViewData> SurvivorRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardWrapperViewData> KillerRewards;

public:
	USeasonEndRankRewardsPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const USeasonEndRankRewardsPopupViewData) { return 0; }
