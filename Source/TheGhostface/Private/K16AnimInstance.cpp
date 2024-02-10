#include "K16AnimInstance.h"

UK16AnimInstance::UK16AnimInstance()
{
	this->_isInStalkMode = false;
	this->_isGhostStealth = false;
	this->_isInChase = false;
	this->_isStalking = false;
	this->_distanceFromCamera = 0.000000;
	this->_leanOffset = 0.000000;
	this->_isCrouched = false;
	this->_isCrouchPressed = false;
}
