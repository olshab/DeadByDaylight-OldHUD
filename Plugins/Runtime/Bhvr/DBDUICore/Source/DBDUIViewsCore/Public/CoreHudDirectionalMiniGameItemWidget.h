#pragma once

#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "EDirectionalInputKey.h"
#include "CoreHudDirectionalMiniGameItemWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreHudDirectionalMiniGameItemWidget : public UCoreBaseHudWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateResult(bool isSuccessful);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateFinaleVisualState(bool isSuccessful);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void RevealDirection(bool withAnimation);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Init(EDirectionalInputKey direction);

public:
	UCoreHudDirectionalMiniGameItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHudDirectionalMiniGameItemWidget) { return 0; }
