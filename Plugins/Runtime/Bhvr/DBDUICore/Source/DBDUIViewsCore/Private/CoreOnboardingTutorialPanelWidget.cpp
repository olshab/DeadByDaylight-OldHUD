#include "CoreOnboardingTutorialPanelWidget.h"

void UCoreOnboardingTutorialPanelWidget::NextPendingButtonUpdated()
{

}

void UCoreOnboardingTutorialPanelWidget::CheckNextPendingButtonUpdate()
{

}

UCoreOnboardingTutorialPanelWidget::UCoreOnboardingTutorialPanelWidget()
{
	this->OnboardingButtonHolderContainers = TArray<UOverlay*>();
	this->LoadingWidget = NULL;
	this->_arrowHighlightRenderOpacity = 1.000000;
	this->_arrowUnhighlightRenderOpacity = 0.350000;
	this->_oneTutorialButtonHolderWidgetClass = NULL;
	this->_twoTutorialButtonHolderWidgetClass = NULL;
	this->_onboardingButtonHolderWidgets = TArray<UCoreOnboardingButtonHolderWidget*>();
	this->_pendingData = TArray<FPendingStepData>();
}
