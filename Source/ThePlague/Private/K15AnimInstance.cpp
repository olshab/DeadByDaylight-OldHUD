#include "K15AnimInstance.h"

void UK15AnimInstance::VomitCoolDownEnd()
{

}

UK15AnimInstance::UK15AnimInstance()
{
	this->_isChargingVomit = false;
	this->_isSpewingVomit = false;
	this->_isVomitCoolDownEnd = false;
	this->_pukeCharge = 0.000000;
	this->_carryFPV = false;
}
