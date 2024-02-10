#include "CoreMemoryStatusEffectDetails.h"

FCoreMemoryStatusEffectDetails::FCoreMemoryStatusEffectDetails()
{
	this->_statusEffect = NULL;
	this->_effectDurationParamKey = TEXT("");
	this->_customEffectParamKey = TEXT("");
	this->_effectDuration = 0.0f;
	this->_customEffectParam = 0.0f;
}
