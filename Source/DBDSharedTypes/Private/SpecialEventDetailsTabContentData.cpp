#include "SpecialEventDetailsTabContentData.h"

FSpecialEventDetailsTabContentData::FSpecialEventDetailsTabContentData()
{
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->Role = EPlayerTeam::VE_None;
}
