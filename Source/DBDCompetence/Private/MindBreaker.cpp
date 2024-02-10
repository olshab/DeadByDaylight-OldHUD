#include "MindBreaker.h"

float UMindBreaker::GetEffectDurationAfterRepairAtLevel() const
{
	return 0.0f;
}

UMindBreaker::UMindBreaker()
{
	this->_effectDurationAfterRepair = 0.000000;
	this->_blindessEffect = NULL;
	this->_exhaustedEffect = NULL;
}
