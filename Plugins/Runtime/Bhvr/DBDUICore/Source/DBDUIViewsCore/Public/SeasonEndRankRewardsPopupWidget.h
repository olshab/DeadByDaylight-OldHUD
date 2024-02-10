#pragma once

#include "CoreMinimal.h"
#include "SeasonEndRankRewardsPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "SeasonEndRankRewardsPopupWidget.generated.h"

class UCorePlayerRankWidget;
class UCoreCurrencyProgressionRewardWidget;
class UDBDRichTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API USeasonEndRankRewardsPopupWidget : public UCoreGenericPopupWidget, public ISeasonEndRankRewardsPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* SurvivorSeasonHighRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* KillerSeasonHighRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* DisclaimerMessageRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* SurvivorRankRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* KillerRankRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCorePlayerRankWidget* SurvivorRank;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreCurrencyProgressionRewardWidget* SurvivorReward;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCorePlayerRankWidget* KillerRank;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreCurrencyProgressionRewardWidget* KillerReward;

public:
	USeasonEndRankRewardsPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const USeasonEndRankRewardsPopupWidget) { return 0; }
