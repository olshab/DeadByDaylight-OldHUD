#include "BaseLockerInteraction.h"

class ALocker;

ALocker* UBaseLockerInteraction::GetLocker() const
{
	return NULL;
}

UBaseLockerInteraction::UBaseLockerInteraction()
{
	this->_owningLocker = NULL;
	this->_lockerIsMontageFollower = true;
}
