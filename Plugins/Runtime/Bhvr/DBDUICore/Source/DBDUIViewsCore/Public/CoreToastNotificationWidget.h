#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "ToastNotificationViewData.h"
#include "CoreToastNotificationWidget.generated.h"

class UDBDImage;
class UCoreButtonWidget;
class UCoreKeyListenerButtonWidget;
class UDBDTextBlock;
class UHorizontalBox;

UCLASS(EditInlineNew)
class UCoreToastNotificationWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Export)
	UDBDImage* ToastIcon;

	UPROPERTY(BlueprintReadOnly, Export)
	UDBDTextBlock* ToastTitle;

	UPROPERTY(BlueprintReadOnly, Export)
	UDBDTextBlock* ToastText;

	UPROPERTY(BlueprintReadOnly, Export)
	UDBDImage* TimeToastProgression;

	UPROPERTY(BlueprintReadOnly, Export)
	UHorizontalBox* ButtonContainer;

	UPROPERTY(BlueprintReadOnly, Export)
	UCoreKeyListenerButtonWidget* LeftButton;

	UPROPERTY(BlueprintReadOnly, Export)
	UCoreKeyListenerButtonWidget* RightButton;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UCoreKeyListenerButtonWidget> ButtonWidgetClass;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisuals(const FToastNotificationViewData& toastData, const bool isInteractable);

private:
	UFUNCTION()
	void OnTimerFinished();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnRightButtonClicked(UCoreButtonWidget* button);

private:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void OnOutAnimationFinished() const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnLeftButtonClicked(UCoreButtonWidget* button);

private:
	UFUNCTION(BlueprintCallable)
	void OnButtonClicked(const int32 buttonId);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ChangeVisibility(bool isVisible);

public:
	UCoreToastNotificationWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreToastNotificationWidget) { return 0; }
