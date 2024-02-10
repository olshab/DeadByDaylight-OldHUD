#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RankViewData.h"
#include "PlayerLevelViewData.h"
#include "ProfileMenuStatsViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UProfileMenuStatsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IProfileMenuStatsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetPlayerRanks(const FRankViewData& survivorViewData, const FRankViewData& killerViewData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetPlayerLevel(const FPlayerLevelViewData& viewData);

};
