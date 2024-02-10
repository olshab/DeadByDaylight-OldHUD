#include "BuckleUp.h"

float UBuckleUp::GetPerkDurationAtLevel() const
{
	return 0.0f;
}

UBuckleUp::UBuckleUp()
{
	this->_perkDuration = 0.000000;
	this->_revealKillerStatusEffect = NULL;
	this->_enduranceStatusEffect = NULL;
}
