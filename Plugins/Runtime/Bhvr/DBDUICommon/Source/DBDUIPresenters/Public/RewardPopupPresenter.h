#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "RewardPopupPresenter.generated.h"

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API URewardPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

public:
	URewardPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const URewardPopupPresenter) { return 0; }
