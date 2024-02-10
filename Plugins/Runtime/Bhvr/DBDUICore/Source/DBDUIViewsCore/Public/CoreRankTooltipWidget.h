#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "RankTooltipViewData.h"
#include "CoreRankTooltipWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreRankTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* RankNameTB;

	UPROPERTY(meta=(BindWidgetOptional))
	UDBDTextBlock* ProgressTB;

	UPROPERTY(meta=(BindWidgetOptional))
	UDBDRichTextBlock* InfoTB;

public:
	UFUNCTION(BlueprintNativeEvent)
	void SetTooltipData(const FRankTooltipViewData& viewData);

public:
	UCoreRankTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreRankTooltipWidget) { return 0; }
