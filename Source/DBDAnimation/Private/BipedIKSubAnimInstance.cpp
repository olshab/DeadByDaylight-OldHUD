#include "BipedIKSubAnimInstance.h"

UBipedIKSubAnimInstance::UBipedIKSubAnimInstance()
{
	this->_enableIK = false;
	this->_isIdle = true;
	this->_traceTypeQuery = TraceTypeQuery1;
	this->_traceComplex = true;
	this->_ignoreTouches = true;
	this->_noGroundTag = TEXT("IkNoGround");
	this->_footIkSpeed = 50.000000;
	this->_pelvisIkSpeed = 5.000000;
	this->_maxExtensionLeftFoot = 70.000000;
	this->_maxExtensionRightFoot = 75.000000;
	this->_footIkSpeedMovingHF2 = 50.000000;
	this->_footIkSpeedIdleHF2 = 15.000000;
	this->_ikBlendSpeedHF2 = 40.000000;
	this->_footIkRotationSpeed = 10.000000;
	this->_pelvisIkSpeedHF2 = 50.000000;
	this->_maxIKTargetDistance = 70.000000;
	this->_pelvisPositionOffsetMin = -55.000000;
	this->_pelvisPositionOffsetMax = 10.000000;
	this->_pelvisPositionOffsetMinHF2 = 0.000000;
	this->_pelvisPositionOffsetMaxHF2 = 0.000000;
	this->_pelvisPositionOffsetMinIdleHF2 = -40.000000;
	this->_pelvisPositionOffsetMaxIdleHF2 = 20.000000;
	this->_frontFeetLineTraceStartOffset = 300.000000;
	this->_frontFeetLineTraceEndOffset = -300.000000;
	this->_backFeetLineTraceStartOffset = 300.000000;
	this->_backFeetLineTraceEndOffset = -300.000000;
	this->_minDistanceFromCapsuleIdle = -80.000000;
	this->_maxDistanceFromCapsuleIdle = 50.000000;
	this->_minDistanceFromCapsuleMoving = -60.000000;
	this->_maxDistanceFromCapsuleMoving = 30.000000;
	this->_pelvisSocketName = TEXT("joint_Pelvis_01");
	this->_leftBackFootSocketName = TEXT("joint_Foot_LT_01_IK");
	this->_rightBackFootSocketName = TEXT("joint_Foot_RT_01_IK");
	this->_leftBackFootBoneName = TEXT("joint_ToeLT_01");
	this->_rightBackFootBoneName = TEXT("joint_ToeRT_01");
	this->_leftBackFootRootBoneName = TEXT("joint_KneeLT_01");
	this->_rightBackFootRootBoneName = TEXT("joint_KneeRT_01");
	this->_skeletalMeshComponent = NULL;
	this->_world = NULL;
}
