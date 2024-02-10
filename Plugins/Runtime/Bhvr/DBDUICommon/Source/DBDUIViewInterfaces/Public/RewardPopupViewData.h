#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "RewardPopupViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API URewardPopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	URewardPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const URewardPopupViewData) { return 0; }
