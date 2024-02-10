#pragma once

#include "CoreMinimal.h"
#include "EventEntryRewardsSubPresenter.h"
#include "EventEntryCollectionSubPresenter.generated.h"

UCLASS()
class UEventEntryCollectionSubPresenter : public UEventEntryRewardsSubPresenter
{
	GENERATED_BODY()

public:
	UEventEntryCollectionSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryCollectionSubPresenter) { return 0; }
