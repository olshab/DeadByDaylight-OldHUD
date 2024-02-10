#pragma once

#include "CoreMinimal.h"
#include "RewardPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "CoreRewardPopupWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreRewardPopupWidget : public UCoreGenericPopupWidget, public IRewardPopupViewInterface
{
	GENERATED_BODY()

public:
	UCoreRewardPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreRewardPopupWidget) { return 0; }
