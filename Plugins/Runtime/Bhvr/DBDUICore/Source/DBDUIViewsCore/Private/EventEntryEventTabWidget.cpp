#include "EventEntryEventTabWidget.h"

void UEventEntryEventTabWidget::OnArchivesButtonClicked()
{

}

UEventEntryEventTabWidget::UEventEntryEventTabWidget()
{
	this->_viewData = NULL;
	this->ImageContainer = NULL;
	this->ScrollBox = NULL;
	this->MessageText = NULL;
	this->AdditionalInformationText = NULL;
	this->ArchivesButton = NULL;
	this->_scrollLabelText = FText::GetEmpty();
	this->_disableArchivesButton = false;
}
