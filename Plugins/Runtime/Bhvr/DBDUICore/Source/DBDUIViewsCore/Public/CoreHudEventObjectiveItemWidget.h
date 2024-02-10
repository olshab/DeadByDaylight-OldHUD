#pragma once

#include "CoreMinimal.h"
#include "HudEventObjectiveItemViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "EEventObjectiveItemState.h"
#include "CoreHudEventObjectiveItemWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreHudEventObjectiveItemWidget : public UCoreBaseHudWidget, public IHudEventObjectiveItemViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite)
	EEventObjectiveItemState _currentState;

	UPROPERTY(BlueprintReadWrite)
	int32 _charges;

	UPROPERTY(BlueprintReadWrite)
	int32 _maxCharges;

public:
	UCoreHudEventObjectiveItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHudEventObjectiveItemWidget) { return 0; }
