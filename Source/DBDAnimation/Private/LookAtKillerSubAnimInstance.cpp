#include "LookAtKillerSubAnimInstance.h"

bool ULookAtKillerSubAnimInstance::IsLookAtAllowed_Implementation() const
{
	return false;
}

float ULookAtKillerSubAnimInstance::GetBlendDuration_Implementation() const
{
	return 0.0f;
}

ULookAtKillerSubAnimInstance::ULookAtKillerSubAnimInstance()
{
	this->_owningPawn = NULL;
	this->_owningKiller = NULL;
	this->_enableDynamics = false;
	this->_dynamicsAlpha = 0.500000;
	this->_shouldApplyDynamics = false;
	this->_blendTime = 0.100000;
	this->_animYaw = 0.000000;
	this->_enableTurnInPlace = false;
	this->_shouldResetLookAtOnAnyMontagePlay = false;
	this->_shouldTurnLeft = false;
	this->_shouldTurnRight = false;
	this->_turnInPlaceThresholdAngle = 45.000000;
	this->_idleNeutralRotationYaw = 0.000000;
	this->_isIdle = false;
	this->_skeletalMeshComponent = NULL;
}
