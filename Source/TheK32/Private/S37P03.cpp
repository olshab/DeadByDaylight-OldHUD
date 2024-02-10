#include "S37P03.h"

float US37P03::GetRepairSpeedDebuffTimeAtLevel() const
{
	return 0.0f;
}

float US37P03::GetRepairSpeedDebuffAmount() const
{
	return 0.0f;
}

US37P03::US37P03()
{
	this->_maxTokens = 5;
	this->_repairSpeedDebuffTime = 0;
	this->_repairSpeedDebuffAmount = -0.500000;
	this->_allowSearchChestForToolboxEffectClass = NULL;
	this->_repairSpeedDebuffEffectClass = NULL;
	this->_allowSearchChestForToolboxEffect = NULL;
}
