#include "K33AnimInstance.h"

UK33AnimInstance::UK33AnimInstance()
{
	this->_isQuadruped = false;
	this->_isInSpecialMode = false;
	this->_isTailAttacking = false;
	this->_isTailAttackCharging = false;
	this->_isInTunnel = false;
	this->_useQuadrupedIK = true;
	this->_useBipedIK = true;
	this->_useLookAt = true;
	this->_usePushBack = true;
	this->_isBeingHitByTurret = false;
	this->_pushBackQuadrupedActive = false;
	this->_pushBackBipedActive = false;
}
