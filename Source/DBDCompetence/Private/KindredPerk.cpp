#include "KindredPerk.h"

float UKindredPerk::GetKillerAuraRevealRangeAtLevel() const
{
	return 0.0f;
}

UKindredPerk::UKindredPerk()
{
	this->_killerAuraRevealRange = TArray<float>();
	this->_kindredRevealKillerOther = NULL;
	this->_kindredRevealKillerOwner = NULL;
	this->_kindredRevealSurvivors = NULL;
}
