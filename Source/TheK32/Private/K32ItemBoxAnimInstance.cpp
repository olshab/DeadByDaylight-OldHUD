#include "K32ItemBoxAnimInstance.h"

UK32ItemBoxAnimInstance::UK32ItemBoxAnimInstance()
{
	this->_owningItemBox = NULL;
	this->_currentState = EK32ItemBoxState::Available;
}
