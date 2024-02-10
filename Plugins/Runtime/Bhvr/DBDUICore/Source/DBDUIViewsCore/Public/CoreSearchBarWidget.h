#pragma once

#include "CoreMinimal.h"
#include "SearchBarViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "Input/Events.h"
#include "Types/SlateEnums.h"
#include "CoreSearchBarWidget.generated.h"

class UEditableTextBox;
class UDBDButton;
class UDBDImage;

UCLASS(EditInlineNew)
class UCoreSearchBarWidget : public UCoreBaseUserWidget, public ISearchBarViewInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	UEditableTextBox* InputTextBox;

	UPROPERTY(Export)
	UDBDButton* KeyboardButton;

	UPROPERTY(Export)
	UDBDButton* ClearButton;

	UPROPERTY(Export)
	UDBDImage* SearchIcon;

	UPROPERTY(EditInstanceOnly)
	bool _useAlphaNumericKeyboard;

protected:
	UFUNCTION()
	void SimulateExtraClick(FPointerEvent mouseDownEvent);

	UFUNCTION()
	void OnTextInputEntered();

	UFUNCTION()
	void OnTextInputChanged();

	UFUNCTION(BlueprintCallable)
	void OnTextCommitted(const FText& inText, TEnumAsByte<ETextCommit::Type> inCommitType);

	UFUNCTION(BlueprintCallable)
	void OnTextChanged(const FText& inText);

	UFUNCTION()
	void OnKeyboardButtonClicked();

	UFUNCTION()
	void OnKeyboadButtonUnhovered();

	UFUNCTION()
	void OnKeyboadButtonHovered();

	UFUNCTION()
	void OnClearButtonClicked();

	UFUNCTION()
	FText GetEnteredText() const;

public:
	UCoreSearchBarWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreSearchBarWidget) { return 0; }
