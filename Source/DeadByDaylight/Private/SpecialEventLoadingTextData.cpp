#include "SpecialEventLoadingTextData.h"

FSpecialEventLoadingTextData::FSpecialEventLoadingTextData()
{
	this->EventId = NAME_None;
	this->Title = TEXT("");
	this->Description = TEXT("");
	this->IconPath = TEXT("");
	this->SpecialBehaviourId = TEXT("");
	this->Id = TEXT("");
	this->isPreviousSpecial = false;
	this->isPreviousSpecial_IsSet = false;
	this->isNextSpecial = false;
	this->isNextSpecial_IsSet = false;
}
