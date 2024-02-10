#include "K32P01.h"

float UK32P01::GetExhaustionDurationAtLevel() const
{
	return 0.0f;
}

UK32P01::UK32P01()
{
	this->_K32P01ExhaustedStatusEffect = NULL;
	this->_exhaustionDuration = 0.000000;
}
