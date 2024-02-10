#include "K31SurvivorAnimInstance.h"

UK31SurvivorAnimInstance::UK31SurvivorAnimInstance()
{
	this->_hasBeenSpottedByDrone = false;
	this->_isInsideAnActiveDroneZone = false;
	this->_isClawTrapped = false;
	this->_isRemovingClawTrap = false;
	this->_isHackingDrone = false;
	this->_walkAnimSpeed = 0.000000;
	this->_isCrawling = false;
	this->_isInsideCloset = false;
	this->_isDead = false;
	this->_isInteracting = false;
	this->_isInjured = false;
	this->_isCrouched = false;
	this->_isHooked = false;
	this->_isIdle = false;
	this->_isUsingAimItem = false;
	this->_isInAir = false;
	this->_isBeingHealed = false;
	this->_isBeingCarried = false;
}
