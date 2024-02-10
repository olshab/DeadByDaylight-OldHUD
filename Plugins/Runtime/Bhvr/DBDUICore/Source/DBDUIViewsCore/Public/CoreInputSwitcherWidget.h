#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EInputSwitcherDisplayRule.h"
#include "Framework/Text/TextLayout.h"
#include "CoreBaseUserWidget.h"
#include "InputSwitcherTriggeredDelegate.h"
#include "EUIActionType.h"
#include "UObject/SoftObjectPtr.h"
#include "CoreInputSwitcherWidget.generated.h"

class UMaterialInstance;
class UAkAudioEvent;
class UCurveFloat;
class UCoreButtonWidget;
class UCoreKeyListenerInputPromptWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class UCoreInputSwitcherWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	EInputSwitcherDisplayRule ButtonDisplayRule;

	UPROPERTY(EditDefaultsOnly)
	EInputSwitcherDisplayRule InputPromptDisplayRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ButtonPressedSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* ButtonPressedSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ButtonHoveredSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* ButtonHoveredSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InputTriggeredSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* InputTriggeredSfx;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreKeyListenerInputPromptWidget* InputPrompt;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreButtonWidget* Button;

	UPROPERTY(EditInstanceOnly)
	bool _shouldRegisterForInputInConstruct;

	UPROPERTY(EditInstanceOnly)
	TEnumAsByte<ETextJustify::Type> _alignment;

	UPROPERTY(EditInstanceOnly)
	bool _isEnabled;

private:
	UPROPERTY(BlueprintAssignable)
	FInputSwitcherTriggeredDelegate _onInputSwitcherTriggeredDelegate;

	UPROPERTY(EditInstanceOnly)
	bool SendAnalyticsData;

	UPROPERTY(EditInstanceOnly)
	FString AnalyticsName;

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
	void SetBackground(TSoftObjectPtr<UMaterialInstance> backgroundMaterial);

	UFUNCTION(BlueprintCallable)
	void SetAlignment(ETextJustify::Type newAlignment);

	UFUNCTION(BlueprintCallable)
	void SetAdditionalIcon(TSoftObjectPtr<UTexture2D> iconTexture);

private:
	UFUNCTION()
	void OnInputPromptTriggered();

	UFUNCTION()
	void OnButtonClicked(UCoreButtonWidget* target);

protected:
	UFUNCTION(BlueprintNativeEvent)
	void OnAlignmentChanged(ETextJustify::Type newAlignment);

public:
	UFUNCTION(BlueprintPure)
	UCoreKeyListenerInputPromptWidget* GetInputPrompt() const;

	UFUNCTION(BlueprintPure)
	UCoreButtonWidget* GetButton() const;

public:
	UCoreInputSwitcherWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreInputSwitcherWidget) { return 0; }
