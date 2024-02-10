#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "MilestoneTrackerItemViewData.h"
#include "UObject/SoftObjectPtr.h"
#include "EMilestoneTrackerItemState.h"
#include "MilestoneTrackerTierItem.generated.h"

class UMaterialInstance;
class UCoreStoreCustomizationItemWidget;
class UDBDImage;
class UEventPointsWidget;

UCLASS(EditInlineNew)
class UMilestoneTrackerTierItem : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreStoreCustomizationItemWidget* Reward;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UEventPointsWidget* EventPointsWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* BackgroundImage;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateBackground(const TSoftObjectPtr<UMaterialInstance> background);

	UFUNCTION(BlueprintImplementableEvent)
	void SetVisualState(const EMilestoneTrackerItemState state);

	UFUNCTION(BlueprintCallable)
	void SetData(const FMilestoneTrackerItemViewData& data);

	UFUNCTION()
	void OnBackgroundImageLoadingStarted();

	UFUNCTION()
	void OnBackgroundImageLoadingCompleted();

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void Clear() const;

public:
	UMilestoneTrackerTierItem();
};

FORCEINLINE uint32 GetTypeHash(const UMilestoneTrackerTierItem) { return 0; }
