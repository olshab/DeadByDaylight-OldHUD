#include "K32SurvivorAnimInstance.h"

void UK32SurvivorAnimInstance::ResetHasBeenCleansedFromAssimilation()
{

}

void UK32SurvivorAnimInstance::ResetHasBeenAssimilatedByKiller()
{

}

void UK32SurvivorAnimInstance::ResetHasBeenAssimilatedByAnotherSurvivor()
{

}

UK32SurvivorAnimInstance::UK32SurvivorAnimInstance()
{
	this->_isAssimilated = false;
	this->_isOwnerBeingCarried = false;
	this->_isSpeedingUpEmpGeneration = false;
	this->_isRetrievingItem = false;
	this->_isUsingEmp = false;
	this->_hasBeenAssimilatedByAnotherSurvivor = false;
	this->_hasBeenAssimilatedByKiller = false;
	this->_hasBeenCleansedFromAssimilation = false;
}
