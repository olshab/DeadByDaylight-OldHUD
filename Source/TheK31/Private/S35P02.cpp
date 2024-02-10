#include "S35P02.h"

float US35P02::GetHasteEffectDurationAtLevel() const
{
	return 0.0f;
}

US35P02::US35P02()
{
	this->_hasteEffectDurationSeconds = 45.000000;
	this->_hasteEffectMovementSpeedIncrease = 0.050000;
	this->_hasteEffectClass = NULL;
	this->_survivorBuffs = TMap<ADBDPlayer*, UStatusEffect*>();
}
