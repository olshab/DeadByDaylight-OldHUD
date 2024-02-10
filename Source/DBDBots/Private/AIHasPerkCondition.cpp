#include "AIHasPerkCondition.h"

FAIHasPerkCondition::FAIHasPerkCondition()
{
	this->PerkID = FDataTableDropdown{};
	this->CompareDisplayPercent = false;
	this->DisplayPercentQuery = EArithmeticKeyOperation::Equal;
	this->DisplayPercentValue = 0.0f;
}
