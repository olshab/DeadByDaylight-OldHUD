#include "ContentScheduleRecord.h"

FContentScheduleRecord::FContentScheduleRecord()
{
	this->Priority = 0;
	this->Description = TEXT("");
	this->Description_IsSet = false;
	this->GameModes = TArray<FString>();
	this->GameModes_IsSet = false;
	this->LinkedEventId = TEXT("");
	this->LinkedEventId_IsSet = false;
	this->MapsThemeWeight = TMap<FString, float>();
	this->MapsThemeWeight_IsSet = false;
	this->MapsWeight = TMap<FString, float>();
	this->MapsWeight_IsSet = false;
	this->FeaturedMap = TArray<FString>();
	this->FeaturedMap_IsSet = false;
	this->StartDate = TEXT("");
	this->StartDate_IsSet = false;
	this->EndDate = TEXT("");
	this->EndDate_IsSet = false;
}
