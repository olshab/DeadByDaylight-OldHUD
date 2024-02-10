#pragma once

#include "CoreMinimal.h"
#include "OnTutorialButtonClickedDelegate.h"
#include "CoreBaseUserWidget.h"
#include "OnTutorialButtonSetDataAnimationCompleteDelegate.h"
#include "CoreOnboardingButtonHolderWidget.generated.h"

class UCoreOnboardingTutorialButtonWidget;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class UCoreOnboardingButtonHolderWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FOnTutorialButtonClickedDelegate OnTutorialButtonClickedDelegate;

	UPROPERTY()
	FOnTutorialButtonSetDataAnimationCompleteDelegate OnSetDataAnimationCompleteDelegate;

	UPROPERTY(BlueprintReadWrite, Export)
	TArray<UCoreOnboardingTutorialButtonWidget*> TutorialButtons;

protected:
	UFUNCTION()
	void OnClickedTutorialButton(UCoreButtonWidget* ClickedTutorialButton);

	UFUNCTION()
	void OnButtonSetDataAnimationCompleteDelegate();

public:
	UFUNCTION(BlueprintCallable)
	FString GetStepId();

public:
	UCoreOnboardingButtonHolderWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreOnboardingButtonHolderWidget) { return 0; }
