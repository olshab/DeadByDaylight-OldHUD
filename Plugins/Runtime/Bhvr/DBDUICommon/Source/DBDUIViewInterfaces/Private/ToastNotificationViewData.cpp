#include "ToastNotificationViewData.h"

FToastNotificationViewData::FToastNotificationViewData()
{
	this->DisplayDuration = 0.0f;
	this->DelayBeforeInteraction = 0.0f;
	this->Inputs = TMap<int32, FToastInput>();
	this->Text = FText::GetEmpty();
	this->Title = TEXT("");
	this->ToastIcon = NULL;
}
