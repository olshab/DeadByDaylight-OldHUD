#include "K18AnimInstance.h"

void UK18AnimInstance::UpdatePowerAttackOpen()
{

}

UK18AnimInstance::UK18AnimInstance()
{
	this->_isAbsorbing = false;
	this->_isDemonMode = false;
	this->_isCharging = false;
	this->_absorbCharge = 0.000000;
	this->_isDashing = false;
	this->_chargeDuration = 0.000000;
	this->_powerAttackOpen = false;
	this->_attackType = EOniAttackType::VE_NotDemonMode;
}
