#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "LoadoutTooltipData.h"
#include "LoadoutTooltipWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;
class UDBDImage;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API ULoadoutTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TooltipTitle;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* ToolTipDescriptionRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* SpecialEventTitle;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* SpecialEventDescription;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* UnlockInstructionText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* RarityTypeSubtitle;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* RarityBG;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* EventHeader;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* Line_1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* LevelIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* ToolTipWarning;

public:
	UFUNCTION()
	void SetTooltipData(const FLoadoutTooltipData& tooltipViewData);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetLoadoutTooltipPerkLevel(int32 level);

	UFUNCTION(BlueprintImplementableEvent)
	void SetLoadoutTooltipLockedState();

public:
	UFUNCTION()
	void Reset();

public:
	ULoadoutTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutTooltipWidget) { return 0; }
