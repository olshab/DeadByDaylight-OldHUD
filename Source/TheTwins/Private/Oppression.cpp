#include "Oppression.h"

float UOppression::GetPerkCooldownAtLevel() const
{
	return 0.0f;
}

float UOppression::GetNumberGensAffectedByPerkAtLevel() const
{
	return 0.0f;
}

UOppression::UOppression()
{
	this->_nbGeneratorsAffectedByPerk = 0;
	this->_perkCooldown = 0;
}
