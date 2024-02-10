#include "HexThrillOfTheHuntStatusEffect.h"

float UHexThrillOfTheHuntStatusEffect::GetSpeedPenaltyPercents(int32 tierLevel) const
{
	return 0.0f;
}

UHexThrillOfTheHuntStatusEffect::UHexThrillOfTheHuntStatusEffect()
{
	this->_speedPenaltyPercents = 0.000000;
}
