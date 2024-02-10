#pragma once

#include "CoreMinimal.h"
#include "MilestoneTrackerEventBasedSkinViewData.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "MilestoneTrackerViewData.h"
#include "MilestoneTrackerWidget.generated.h"

class UDBDRichTextBlock;
class UMilestoneTrackerTierItem;
class UHorizontalBox;
class UCoreButtonWidget;
class UDBDImage;
class UEventPointsWidget;

UCLASS(EditInlineNew)
class UMilestoneTrackerWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* Title;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* MilestonePointsText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UEventPointsWidget* UserMilestonePointsWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* RewardsGrid;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* Background;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UMilestoneTrackerTierItem> _milestoneTrackerTierItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _maxTierItems;

private:
	UPROPERTY(Transient, Export)
	TArray<UMilestoneTrackerTierItem*> _tierItemPool;

public:
	UFUNCTION(BlueprintCallable)
	void SetVisuals(const FMilestoneTrackerEventBasedSkinViewData& viewData);

	UFUNCTION(BlueprintCallable)
	void SetData(const FMilestoneTrackerViewData& viewData);

	UFUNCTION(BlueprintCallable)
	void SelectMilestoneTrackerItem(FName itemId);

private:
	UFUNCTION()
	void OnRewardItemClicked(UCoreButtonWidget* buttonTarget);

public:
	UFUNCTION(BlueprintCallable)
	void DeselectMilestoneRewards();

public:
	UMilestoneTrackerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UMilestoneTrackerWidget) { return 0; }
