#pragma once

#include "CoreMinimal.h"
#include "GenericTextInputPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "Types/SlateEnums.h"
#include "EPopupButtonType.h"
#include "CoreGenericTextInputPopupWidget.generated.h"

class UEditableTextBox;
class UDBDScrollBox;
class UCoreButtonWidget;
class UDBDImage;
class UDBDButton;
class UDBDRichTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreGenericTextInputPopupWidget : public UCoreGenericPopupWidget, public IGenericTextInputPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UEditableTextBox* InputTextBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDScrollBox* MessageScrollBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* ErrorIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* ErrorMessageTextBlock;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDButton* KeyboardButton;

public:
	UFUNCTION(BlueprintCallable)
	void OnTextInputChoiceSelected(EPopupButtonType selectedButtonType, const FString& inputText);

protected:
	UFUNCTION(BlueprintCallable)
	void OnTextEntered(EPopupButtonType selectedButtonType, const FString& inputText);

	UFUNCTION(BlueprintCallable)
	void OnTextCommitted(const FText& inText, TEnumAsByte<ETextCommit::Type> inCommitType);

	UFUNCTION()
	void OnKeyboardButtonClicked();

	UFUNCTION()
	void OnButtonUnhovered(UCoreButtonWidget* button);

	UFUNCTION()
	void OnButtonHovered(UCoreButtonWidget* button);

public:
	UCoreGenericTextInputPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreGenericTextInputPopupWidget) { return 0; }
