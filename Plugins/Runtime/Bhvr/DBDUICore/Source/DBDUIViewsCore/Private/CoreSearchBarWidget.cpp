#include "CoreSearchBarWidget.h"
#include "Input/Events.h"
#include "Types/SlateEnums.h"

void UCoreSearchBarWidget::SimulateExtraClick(FPointerEvent mouseDownEvent)
{

}

void UCoreSearchBarWidget::OnTextInputEntered()
{

}

void UCoreSearchBarWidget::OnTextInputChanged()
{

}

void UCoreSearchBarWidget::OnTextCommitted(const FText& inText, TEnumAsByte<ETextCommit::Type> inCommitType)
{

}

void UCoreSearchBarWidget::OnTextChanged(const FText& inText)
{

}

void UCoreSearchBarWidget::OnKeyboardButtonClicked()
{

}

void UCoreSearchBarWidget::OnKeyboadButtonUnhovered()
{

}

void UCoreSearchBarWidget::OnKeyboadButtonHovered()
{

}

void UCoreSearchBarWidget::OnClearButtonClicked()
{

}

FText UCoreSearchBarWidget::GetEnteredText() const
{
	return FText::GetEmpty();
}

UCoreSearchBarWidget::UCoreSearchBarWidget()
{
	this->InputTextBox = NULL;
	this->KeyboardButton = NULL;
	this->ClearButton = NULL;
	this->SearchIcon = NULL;
	this->_useAlphaNumericKeyboard = false;
}
