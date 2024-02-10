#include "SmashHit.h"

USmashHit::USmashHit()
{
	this->_exhaustedTime = 0.000000;
	this->_hasteTime = -1.000000;
	this->_hasteValue = 0.000000;
	this->_exhaustedEffect = NULL;
	this->_hasteEffect = NULL;
	this->stunTypeEnum = NULL;
}
