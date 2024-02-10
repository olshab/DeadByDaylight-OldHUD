#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "PlayerLevelViewData.h"
#include "CorePlayerLevelWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerLevelWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FPlayerLevelViewData& viewData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AnimateLevelUp();

public:
	UCorePlayerLevelWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerLevelWidget) { return 0; }
