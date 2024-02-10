#include "Coulrophobia.h"

float UCoulrophobia::GetHealPenaltyAtLevel() const
{
	return 0.0f;
}

UCoulrophobia::UCoulrophobia()
{
	this->_coulrophobiaEffect = NULL;
	this->_healPenalty = 0.000000;
}
