#include "HexBloodFavor.h"

float UHexBloodFavor::GetPalletPulldownBlockTimeAtLevel() const
{
	return 0.0f;
}

float UHexBloodFavor::GetPalletInRangeAtLevel() const
{
	return 0.0f;
}

UHexBloodFavor::UHexBloodFavor()
{
	this->_palletInRange = 0.000000;
	this->_palletPulldownBlockTime = 0.000000;
}
