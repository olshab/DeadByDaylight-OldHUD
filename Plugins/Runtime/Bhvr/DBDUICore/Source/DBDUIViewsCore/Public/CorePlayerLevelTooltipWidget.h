#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "CorePlayerLevelTooltipViewData.h"
#include "CorePlayerLevelTooltipWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerLevelTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* XPCurrentTitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* XPTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* XPNextTitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* NextXpTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* PlayerLevelTitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* PrestigeTitleTB;

	UPROPERTY(meta=(BindWidgetOptional))
	UDBDRichTextBlock* InfoTB;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetTooltipData(const FCorePlayerLevelTooltipViewData& viewData);

public:
	UCorePlayerLevelTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerLevelTooltipWidget) { return 0; }
