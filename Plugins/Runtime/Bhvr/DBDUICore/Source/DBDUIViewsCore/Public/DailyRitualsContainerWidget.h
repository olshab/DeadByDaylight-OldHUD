#pragma once

#include "CoreMinimal.h"
#include "OnOutOfDailyRitualsDelegate.h"
#include "DailyRitualViewData.h"
#include "CoreBaseUserWidget.h"
#include "ClaimedRitualDelegate.h"
#include "RemovedDailyRitualDelegate.h"
#include "Templates/SubclassOf.h"
#include "DailyRitualsContainerWidget.generated.h"

class UDBDTextBlock;
class UDailyRitualTileWidget;
class UUITweenInstance;
class UCanvasPanel;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UDailyRitualsContainerWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FClaimedRitualDelegate _claimButtonClickedDelegate;

	UPROPERTY()
	FRemovedDailyRitualDelegate _removeButtonClickedDelegate;

	UPROPERTY()
	FOnOutOfDailyRitualsDelegate _onOutOfDailyRitualsDelegate;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UDailyRitualTileWidget> DailyRitualTileWidgetClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UDailyRitualTileWidget> OnboardingRitualTileWidgetClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* Container;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* NoRitualWarningText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float TilePadding;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float FadeInNoRitualsWarningTextDuration;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float AlignmentAnimationDuration;

private:
	UPROPERTY(Transient)
	UUITweenInstance* _alignAssignedRitualsTween;

public:
	UFUNCTION(BlueprintCallable)
	void StartAnim();

	UFUNCTION(BlueprintCallable)
	void SetData(TArray<FDailyRitualViewData> dailyRitualsData, const bool isAfterTrial);

private:
	UFUNCTION()
	void OnRecentlyAssignedDailyRitualFadeInComplete(UDailyRitualTileWidget* dailyRitualTile);

	UFUNCTION()
	void OnDelayUntilFadeInSequenceComplete(UUITweenInstance* delayUntilFadeInSequenceTween);

	UFUNCTION()
	void OnDailyRitualTileFadeOutComplete(UDailyRitualTileWidget* dailyRitualTile);

protected:
	UFUNCTION()
	void OnDailyRitualRemoveButtonClicked(const FString& dailyRitualKey);

	UFUNCTION()
	void OnDailyRitualClaimButtonClicked(const FString& dailyRitualKey);

public:
	UDailyRitualsContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UDailyRitualsContainerWidget) { return 0; }
