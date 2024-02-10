#include "K11AnimInstance.h"

UK11AnimInstance::UK11AnimInstance()
{
	this->_isAmbushAttack = false;
	this->_isCrouched = false;
	this->_isCrouchPressed = false;
	this->_crouchPlayRate = 1.000000;
	this->_uncrouchPlayRate = 1.000000;
	this->_crouchInteractionDefinitionClass = NULL;
	this->_uncrouchInteractionDefinitionClass = NULL;
	this->_crouchToStand = NULL;
	this->_standToCrouch = NULL;
	this->_crouchToStandFPV = NULL;
	this->_standToCrouchFPV = NULL;
	this->_crouchInteractionDefinition = NULL;
	this->_uncrouchInteractionDefinition = NULL;
}
