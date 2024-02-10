#include "S34P03.h"

float US34P03::GetRepairSpeedAtLevel() const
{
	return 0.0f;
}

US34P03::US34P03()
{
	this->_activeStatusEffects = TMap<ADBDPlayer*, UStatusEffect*>();
	this->_repairSpeedModifierClass = NULL;
	this->_revealGeneratorAurasInRangeEffectClass = NULL;
	this->_repairSpeedValues = 0.000000;
	this->_generatorRanges = 0.000000;
}
