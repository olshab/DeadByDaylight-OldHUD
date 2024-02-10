#include "K34PowerAnimInstance.h"

UK34PowerAnimInstance::UK34PowerAnimInstance()
{
	this->_isInTipToeMode = false;
	this->_isChargingScamper = false;
	this->_isScampering = false;
	this->_isChainScampering = false;
	this->_forwardVelocity = 0.000000;
	this->_lateralVelocity = 0.000000;
	this->_attackState = EAttackSubstate::VE_None;
	this->_shouldTriggerLookBackAnimation = false;
	this->_minTimeToStartLookBackAnimation = 5.000000;
	this->_maxTimeToStartLookBackAnimation = 14.000000;
}
