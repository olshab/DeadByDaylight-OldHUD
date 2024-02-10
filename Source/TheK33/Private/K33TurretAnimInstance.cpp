#include "K33TurretAnimInstance.h"

UK33TurretAnimInstance::UK33TurretAnimInstance()
{
	this->_isInPool = false;
	this->_isInsideControlStation = false;
	this->_isBeingCollected = false;
	this->_isCarryable = false;
	this->_isAttachedToSurvivor = false;
	this->_isBeingDeployed = false;
	this->_isDeployCancelled = false;
	this->_isDeployed = false;
	this->_isBeingUndeployed = false;
	this->_isUndeployCancelled = false;
	this->_isFiring = false;
	this->_isOverheated = false;
	this->_isBeingRepaired = false;
	this->_isDestroyed = false;
	this->_isFiringAlpha = 0.000000;
	this->_isMalfunctioning = false;
	this->_animYaw = 0.000000;
	this->_frontLegPitch = 0.000000;
	this->_backLegsPitch = 0.000000;
}
