#include "CoreToastNotificationContainerWidget.h"

void UCoreToastNotificationContainerWidget::HandleToastPromptSelected(const uint32 notificationId)
{

}

void UCoreToastNotificationContainerWidget::HandleToastDisplayEnded(const uint32 notificationId)
{

}

void UCoreToastNotificationContainerWidget::HandleToastButtonSelected(const int32 buttonId, const uint32 notificationId)
{

}

UCoreToastNotificationContainerWidget::UCoreToastNotificationContainerWidget()
{
	this->ToastNotificationWidgetClass = NULL;
	this->ToastsContainer = NULL;
	this->_toastsDisplayedOnScreen = TMap<int32, UCoreToastNotificationWidget*>();
}
