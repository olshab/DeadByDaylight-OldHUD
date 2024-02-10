#include "MrMarchAnimInstance.h"

UMrMarchAnimInstance::UMrMarchAnimInstance()
{
	this->_isDestroyed = false;
	this->_isInJumpscare = false;
	this->_isBeingDestroyed = false;
	this->_isSpawned = false;
	this->_mrMarch = NULL;
}
