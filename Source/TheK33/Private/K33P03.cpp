#include "K33P03.h"

float UK33P03::GetPerkAuraRevealDurationAtLevel() const
{
	return 0.0f;
}

float UK33P03::GetObliviousDurationAtLevel() const
{
	return 0.0f;
}

UK33P03::UK33P03()
{
	this->_perkAuraRevealDuration = 0.000000;
	this->_obliviousDuration = 0.000000;
	this->_revealedStatusEffect = NULL;
	this->_obliviousStatusEffect = NULL;
}
