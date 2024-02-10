#include "K33PushbackAnimInstance.h"

UK33PushbackAnimInstance::UK33PushbackAnimInstance()
{
	this->IsActive = false;
	this->IsFPV = false;
	this->_traceTypeQuery = TraceTypeQuery1;
	this->_traceComplex = false;
	this->_ignoreTouches = true;
	this->_forwardCheckDistance = 100.000000;
	this->_backwardCheckDistance = 200.000000;
	this->ForwardHitDistance = 0.000000;
	this->BackwardHitDistance = 0.000000;
	this->_character = NULL;
}
