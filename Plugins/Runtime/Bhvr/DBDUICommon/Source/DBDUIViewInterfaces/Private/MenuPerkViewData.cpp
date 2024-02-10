#include "MenuPerkViewData.h"

UMenuPerkViewData::UMenuPerkViewData()
{
	this->Level = -1;
	this->DisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->EventName = FText::GetEmpty();
	this->EventId = TEXT("");
}
