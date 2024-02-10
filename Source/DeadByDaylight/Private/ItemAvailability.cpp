#include "ItemAvailability.h"

FItemAvailability::FItemAvailability()
{
	this->itemAvailability = EItemAvailability::Available;
	this->DLCId = TEXT("");
	this->AdditionalDlcIds = TArray<FString>();
	this->CloudInventoryId = 0;
	this->CommunityId = TEXT("");
}
