#include "S3DLCAdditionalInfoEntry.h"

FS3DLCAdditionalInfoEntry::FS3DLCAdditionalInfoEntry()
{
	this->DlcId = TEXT("");
	this->AvailableStartDate = TEXT("");
	this->AvailableStartDate_IsSet = false;
	this->AvailableEndDate = TEXT("");
	this->AvailableEndDate_IsSet = false;
	this->IsShownInGameStore = false;
	this->IsShownInGameStore_IsSet = false;
}
