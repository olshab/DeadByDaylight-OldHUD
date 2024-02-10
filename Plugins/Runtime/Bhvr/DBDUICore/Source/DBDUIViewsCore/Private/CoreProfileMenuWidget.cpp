#include "CoreProfileMenuWidget.h"

class UCoreSelectableButtonWidget;

void UCoreProfileMenuWidget::OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCoreProfileMenuWidget::OnBackButtonClicked()
{

}

UCoreProfileMenuWidget::UCoreProfileMenuWidget()
{
	this->TabsContainer = NULL;
	this->BackInputSwitcher = NULL;
	this->SettingsInputSwitcher = NULL;
	this->ScrollPrompt = NULL;
}
