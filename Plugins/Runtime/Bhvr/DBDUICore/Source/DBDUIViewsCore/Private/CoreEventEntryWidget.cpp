#include "CoreEventEntryWidget.h"

class UCoreSelectableButtonWidget;

void UCoreEventEntryWidget::SetUiTakeoverActive_Implementation(bool isActive)
{

}

void UCoreEventEntryWidget::OnTabSelected(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCoreEventEntryWidget::OnBackAction()
{

}

UCoreEventEntryWidget::UCoreEventEntryWidget()
{
	this->_viewData = NULL;
	this->_eventSkinDataTable = NULL;
	this->TitleBanner = NULL;
	this->TitleImage = NULL;
	this->EventDateText = NULL;
	this->TabsContainer = NULL;
	this->MilestoneTracker = NULL;
	this->ScrollPrompt = NULL;
	this->RegressionButton = NULL;
	this->TitleText = NULL;
}
