#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "Layout/Margin.h"
#include "TooltipWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UTooltipWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FMargin _tooltipMargin;

public:
	UTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UTooltipWidget) { return 0; }
