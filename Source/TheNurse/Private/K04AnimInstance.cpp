#include "K04AnimInstance.h"

UK04AnimInstance::UK04AnimInstance()
{
	this->_isFullyCharged = false;
	this->_blinkPlayRate = 0.000000;
	this->_cooldownPlayRate = 0.000000;
	this->_isBlinking = false;
	this->_isBlinkReady = false;
	this->_isInCooldown = false;
	this->_isChargingBlink = false;
	this->_isChainBlinking = false;
	this->_isInterrupting = false;
	this->_blinkSequence = NULL;
	this->_cooldownSequence = NULL;
	this->_isChainBlinkAttacking = false;
}
