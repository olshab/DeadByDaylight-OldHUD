#pragma once

#include "CoreMinimal.h"
#include "ETooltipVerticalAlignment.h"
#include "AlertsViewInterface.h"
#include "ETooltipHorizontalAlignment.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "AlertsViewData.h"
#include "RewardWrapperViewData.h"
#include "CoreAlertsWidget.generated.h"

class UHorizontalBox;
class UCoreRewardWrapperWidget;
class UCoreButtonWidget;
class UDBDImage;
class UAkAudioEvent;
class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreAlertsWidget : public UCoreBaseUserWidget, public IAlertsViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UCoreRewardWrapperWidget> RewardWidgetClass;

	UPROPERTY(BlueprintReadOnly, Export)
	UHorizontalBox* Container;

	UPROPERTY(BlueprintReadOnly, Export)
	UDBDImage* BackgroundImage;

	UPROPERTY(BlueprintReadOnly, Export)
	UDBDTextBlock* RewardClaimedText;

	UPROPERTY(BlueprintReadOnly, Export)
	UDBDTextBlock* NumberRewardsText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipHorizontalAlignment HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipVerticalAlignment VerticalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* SoundEffectCurrency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* SoundEffectCommon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* SoundEffectUncommon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* SoundEffectRare;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* SoundEffectVeryRare;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* SoundEffectUltraRare;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* SoundEffectLegendary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* SoundEffectCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* SoundEffectSpecialEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* SoundEffectProgression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* SoundEffectDisappear;

private:
	UFUNCTION()
	void ShowRewardTooltip(UCoreButtonWidget* rewardWidget);

public:
	UFUNCTION(BlueprintCallable)
	void ShowAlertRewards(const FAlertsViewData& alertsViewData);

private:
	UFUNCTION()
	void RewardAlertSequenceCompleted();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlaySoundEffect(UAkAudioEvent* soundFx);

	UFUNCTION(BlueprintImplementableEvent)
	void PlayNextRewardsSequenceAnimation(const TArray<FRewardWrapperViewData>& AlertRewards);

	UFUNCTION(BlueprintImplementableEvent)
	void PlayInterSequenceAnimation();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayEndSequenceAnimation();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayDisplayRewardSound(const FRewardWrapperViewData& rewardData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayDisappearRewardSound();

private:
	UFUNCTION()
	void HideRewardTooltip(UCoreButtonWidget* rewardWidget);

public:
	UFUNCTION(BlueprintPure)
	UAkAudioEvent* GetDisplayRewardSound(const FRewardWrapperViewData& rewardData) const;

	UFUNCTION(BlueprintCallable)
	void EndRewardDisplayRequested();

	UFUNCTION(BlueprintCallable)
	void EndInterSequenceAnimation();

	UFUNCTION(BlueprintCallable)
	void EndEndSequenceAnimation();

private:
	UFUNCTION()
	void DisplayNextRewardSequence();

public:
	UCoreAlertsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreAlertsWidget) { return 0; }
