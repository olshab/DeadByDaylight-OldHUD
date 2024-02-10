#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "LabelTooltipWidget.generated.h"

class UDBDRichTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API ULabelTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LabelRTB;

public:
	UFUNCTION()
	void SetTooltipData(const FText& labelText);

	UFUNCTION()
	void Reset();

public:
	ULabelTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const ULabelTooltipWidget) { return 0; }
