#include "TimerFlagViewData.h"

FTimerFlagViewData::FTimerFlagViewData()
{
	this->FlagType = EFlagType::Sale;
	this->FlagSize = EFlagSize::Short;
	this->ItemType = EFlagItemType::Unbreakable;
	this->TimerText = TEXT("");
}
