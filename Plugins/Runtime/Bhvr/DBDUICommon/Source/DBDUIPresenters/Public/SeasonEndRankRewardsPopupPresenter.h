#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "SeasonEndRankRewardsPopupPresenter.generated.h"

UCLASS(EditInlineNew)
class USeasonEndRankRewardsPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

public:
	USeasonEndRankRewardsPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const USeasonEndRankRewardsPopupPresenter) { return 0; }
