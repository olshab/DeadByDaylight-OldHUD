#include "SpecialEventEntryPopupData.h"

FSpecialEventEntryPopupData::FSpecialEventEntryPopupData()
{
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->AdditionalStoreItemIds = TArray<FName>();
	this->AdditionalStoreEventsIds = TArray<FName>();
	this->StoreItemIdPriorityOrdering = TArray<FName>();
	this->UseDetailsTab = false;
	this->DetailsTabData = FSpecialEventDetailsTabData{};
}
