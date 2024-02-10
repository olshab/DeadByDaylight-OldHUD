#include "CoreGenericTextInputPopupWidget.h"
#include "EPopupButtonType.h"
#include "Types/SlateEnums.h"

class UCoreButtonWidget;

void UCoreGenericTextInputPopupWidget::OnTextInputChoiceSelected(EPopupButtonType selectedButtonType, const FString& inputText)
{

}

void UCoreGenericTextInputPopupWidget::OnTextEntered(EPopupButtonType selectedButtonType, const FString& inputText)
{

}

void UCoreGenericTextInputPopupWidget::OnTextCommitted(const FText& inText, TEnumAsByte<ETextCommit::Type> inCommitType)
{

}

void UCoreGenericTextInputPopupWidget::OnKeyboardButtonClicked()
{

}

void UCoreGenericTextInputPopupWidget::OnButtonUnhovered(UCoreButtonWidget* button)
{

}

void UCoreGenericTextInputPopupWidget::OnButtonHovered(UCoreButtonWidget* button)
{

}

UCoreGenericTextInputPopupWidget::UCoreGenericTextInputPopupWidget()
{
	this->InputTextBox = NULL;
	this->MessageScrollBox = NULL;
	this->ErrorIcon = NULL;
	this->ErrorMessageTextBlock = NULL;
	this->KeyboardButton = NULL;
}
