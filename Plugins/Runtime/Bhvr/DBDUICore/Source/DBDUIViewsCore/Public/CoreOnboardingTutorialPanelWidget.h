#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnboardingTutorialViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "PendingStepData.h"
#include "TutorialSelectedDelegate.h"
#include "CoreOnboardingTutorialPanelWidget.generated.h"

class UUserWidget;
class UCoreOnboardingButtonHolderWidget;
class UOverlay;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOnboardingTutorialPanelWidget : public UCoreBaseUserWidget, public IOnboardingTutorialViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Export)
	TArray<UOverlay*> OnboardingButtonHolderContainers;

	UPROPERTY(BlueprintAssignable)
	FTutorialSelectedDelegate TutorialSelectedDelegate;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUserWidget* LoadingWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _arrowHighlightRenderOpacity;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _arrowUnhighlightRenderOpacity;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UCoreOnboardingButtonHolderWidget> _oneTutorialButtonHolderWidgetClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UCoreOnboardingButtonHolderWidget> _twoTutorialButtonHolderWidgetClass;

	UPROPERTY(BlueprintReadOnly, Export)
	TArray<UCoreOnboardingButtonHolderWidget*> _onboardingButtonHolderWidgets;

private:
	UPROPERTY(Transient)
	TArray<FPendingStepData> _pendingData;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void TryBroadcastSelectedTutorial(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintImplementableEvent)
	void SetTutorialSeparators(const FString& completedStepId);

	UFUNCTION(BlueprintImplementableEvent)
	void SetTutorialDescription(const FText& description, bool isWarning);

private:
	UFUNCTION()
	void NextPendingButtonUpdated();

	UFUNCTION()
	void CheckNextPendingButtonUpdate();

public:
	UCoreOnboardingTutorialPanelWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreOnboardingTutorialPanelWidget) { return 0; }
