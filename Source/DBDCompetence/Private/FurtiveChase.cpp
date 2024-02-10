#include "FurtiveChase.h"

float UFurtiveChase::GetUndetectableAndHasteStatusEffectDurationAtLevel() const
{
	return 0.0f;
}

float UFurtiveChase::GetHasteStatusEffectPercent() const
{
	return 0.0f;
}

UFurtiveChase::UFurtiveChase()
{
	this->_undetectableStatusEffectClass = NULL;
	this->_hasteStatusEffectClass = NULL;
	this->_undetectableAndHasteStatusEffectDuration = 0.000000;
	this->_hasteStatusEffectPercent = 0.050000;
	this->_hasteEffect = NULL;
}
