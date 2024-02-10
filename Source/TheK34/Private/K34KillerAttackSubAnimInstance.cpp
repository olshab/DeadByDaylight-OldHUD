#include "K34KillerAttackSubAnimInstance.h"

UK34KillerAttackSubAnimInstance::UK34KillerAttackSubAnimInstance()
{
	this->_shouldTriggerSpecialAnimation = false;
	this->_isDodson = false;
	this->_anticipatedAttackSubStateAfterHitting = EAttackSubstate::VE_None;
	this->_targetDistanceHorizontal = 0.000000;
	this->_percentOfJumpDistance = 0.000000;
	this->_maxJumpDistance = 100.000000;
	this->_specialAnimationTriggerChance = 0.250000;
}
