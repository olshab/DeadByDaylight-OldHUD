#pragma once

#include "CoreMinimal.h"
#include "EventEntryRewardsSubPresenter.h"
#include "EventEntryStoreSubPresenter.generated.h"

class UStoreCustomizationItemViewData;

UCLASS()
class UEventEntryStoreSubPresenter : public UEventEntryRewardsSubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<UStoreCustomizationItemViewData*> _storeItems;

public:
	UEventEntryStoreSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryStoreSubPresenter) { return 0; }
