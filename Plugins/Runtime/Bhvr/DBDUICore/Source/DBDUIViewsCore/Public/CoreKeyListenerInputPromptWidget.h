#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "OnKeyListenerInputPromptTriggeredDelegate.h"
#include "CoreBaseUserWidget.h"
#include "EUIActionType.h"
#include "InputCoreTypes.h"
#include "CoreKeyListenerInputPromptWidget.generated.h"

class UDBDTextBlock;
class UAkAudioEvent;
class UCoreInputPromptWidget;
class UCurveFloat;
class UDBDImage;
class UTexture2D;

UCLASS(EditInlineNew)
class UCoreKeyListenerInputPromptWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClickedSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* ClickedSfx;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputPromptWidget* InputPrompt;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* LabelTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* AdditionalIconIMG;

private:
	UPROPERTY(BlueprintAssignable)
	FOnKeyListenerInputPromptTriggeredDelegate _onKeyListenerInputPromptTriggeredDelegate;

public:
	UFUNCTION(BlueprintCallable)
	void SetUIAction(const EUIActionType actionType);

	UFUNCTION(BlueprintCallable)
	void SetRepeatable(bool isRepeatable, UCurveFloat* repetitionDelayCurve);

	UFUNCTION(BlueprintCallable)
	void SetLabel(const FText& label);

	UFUNCTION(BlueprintCallable)
	void SetKeyOverride(const FKey keyOverride);

	UFUNCTION(BlueprintCallable)
	void SetEnabled(bool isEnabled);

	UFUNCTION(BlueprintCallable)
	void SetBetaFeatureOverlayVisible(bool isVisible);

	UFUNCTION(BlueprintCallable)
	void SetAdditionalIcon(TSoftObjectPtr<UTexture2D> iconTexture);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnEnabledChanged(bool isEnabled);

public:
	UFUNCTION(BlueprintPure)
	bool IsEnabled() const;

public:
	UCoreKeyListenerInputPromptWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreKeyListenerInputPromptWidget) { return 0; }
