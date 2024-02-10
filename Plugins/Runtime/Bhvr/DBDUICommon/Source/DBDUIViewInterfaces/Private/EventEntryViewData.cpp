#include "EventEntryViewData.h"

UEventEntryViewData::UEventEntryViewData()
{
	this->Title = FText::GetEmpty();
	this->Message = TEXT("");
	this->AvailabilityDates = FText::GetEmpty();
	this->EventFrameLabel = FText::GetEmpty();
	this->ImageBannerText = FText::GetEmpty();
	this->EventTabMessage = FText::GetEmpty();
	this->ImageTexture = NULL;
	this->ShouldShowEventTomeButton = false;
	this->ShouldActivateUiTakeover = false;
}
