#include "CoreOnboardingButtonHolderWidget.h"

class UCoreButtonWidget;

void UCoreOnboardingButtonHolderWidget::OnClickedTutorialButton(UCoreButtonWidget* ClickedTutorialButton)
{

}

void UCoreOnboardingButtonHolderWidget::OnButtonSetDataAnimationCompleteDelegate()
{

}

FString UCoreOnboardingButtonHolderWidget::GetStepId()
{
	return TEXT("");
}

UCoreOnboardingButtonHolderWidget::UCoreOnboardingButtonHolderWidget()
{
	this->TutorialButtons = TArray<UCoreOnboardingTutorialButtonWidget*>();
}
