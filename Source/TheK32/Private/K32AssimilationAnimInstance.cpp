#include "K32AssimilationAnimInstance.h"

void UK32AssimilationAnimInstance::ResetIsDestroyedByHook()
{

}

void UK32AssimilationAnimInstance::ResetIsDestroyedByEmp()
{

}

UK32AssimilationAnimInstance::UK32AssimilationAnimInstance()
{
	this->_isMale = false;
	this->_isBeingMoried = false;
	this->_isDeadOrInParadise = false;
	this->_isMoving = false;
	this->_isRunning = false;
	this->_isCrawling = false;
	this->_isRetrievingItem = false;
	this->_isInAir = false;
	this->_isHealing = false;
	this->_isBeingMended = false;
	this->_isBeingHooked = false;
	this->_isBeingHealed = false;
	this->_isCleansingTotem = false;
	this->_isOwnerUsingGesture = false;
	this->_isOwnerEscapingWithHatch = false;
	this->_isInteractingWithLocker = false;
	this->_isInteractingWithChest = false;
	this->_isAssimilated = false;
	this->_isDestroyedByEmp = false;
	this->_isDestroyedByHook = false;
	this->_isDestroyedByTeleport = false;
	this->_isOwnerCrouching = false;
	this->_isOwnerInjured = false;
	this->_isOwnerKO = false;
	this->_isOwnerInCloset = false;
	this->_isOwnerExitingLocker = false;
	this->_isOwnerBeingCarried = false;
	this->_isOwnerVaulting = false;
	this->_isOwnerBeingPulledFromCloset = false;
	this->_isBeingLookedAtByKillerPod = false;
}
