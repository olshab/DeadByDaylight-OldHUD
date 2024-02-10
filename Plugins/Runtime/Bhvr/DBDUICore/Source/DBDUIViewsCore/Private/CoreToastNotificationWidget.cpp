#include "CoreToastNotificationWidget.h"

void UCoreToastNotificationWidget::OnTimerFinished()
{

}

void UCoreToastNotificationWidget::OnOutAnimationFinished() const
{

}

void UCoreToastNotificationWidget::OnButtonClicked(const int32 buttonId)
{

}

UCoreToastNotificationWidget::UCoreToastNotificationWidget()
{
	this->ToastIcon = NULL;
	this->ToastTitle = NULL;
	this->ToastText = NULL;
	this->TimeToastProgression = NULL;
	this->ButtonContainer = NULL;
	this->LeftButton = NULL;
	this->RightButton = NULL;
	this->ButtonWidgetClass = NULL;
}
