#include "DBDCharacterMovementComponent.h"
#include "MontageStopDefinition.h"
#include "MontagePlaybackDefinition.h"
#include "Engine/NetSerialization.h"
#include "SnappingData.h"
#include "MaxSpeedValidate.h"
#include "UObject/NoExportTypes.h"
#include "EMovementCurveType.h"
#include "YawAndPitchRotator_NetQuantize32.h"

class UAnimMontage;

void UDBDCharacterMovementComponent::Server_StopMontage_Implementation(float timestamp, const FMontageStopDefinition montageStopDefinition)
{

}

void UDBDCharacterMovementComponent::Server_StartSnapping_Implementation(float timestamp, const FSnappingData data, int32 snappingCallCount, uint64 clientTimeSync)
{

}

bool UDBDCharacterMovementComponent::Server_StartSnapping_Validate(float timestamp, const FSnappingData data, int32 snappingCallCount, uint64 clientTimeSync)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_ShowAllIncreaseMovementSpeedModifier_Implementation(const float clientMaxSpeedMultiplierScalar, const float clientcomputedMaxSpeedMultiplierScalar, const TArray<FMaxSpeedValidate>& clientModifiers)
{

}

void UDBDCharacterMovementComponent::Server_SetStopSnapping_Implementation(float timestamp, const bool snapToFinalDestination)
{

}

void UDBDCharacterMovementComponent::Server_SetMaxSpeedOverride_Implementation(float timestamp, float value, bool isSet, const int32 maxSpeedOverrideCallCount)
{

}

void UDBDCharacterMovementComponent::Server_SetMaxSpeedMultiplierScalar_Implementation(float timestamp, float value)
{

}

void UDBDCharacterMovementComponent::Server_SetMaxAcceleration_Implementation(float timestamp, float value)
{

}

void UDBDCharacterMovementComponent::Server_SetIgnorePawnCollisionOverride_Implementation(float timestamp, bool isIgnoringPawnCollision, int32 ignoringCollisionCallCount)
{

}

void UDBDCharacterMovementComponent::Server_SetAdditiveMaxSpeedScalar_Implementation(float timestamp, float value)
{

}

void UDBDCharacterMovementComponent::Server_ReplicateControlRotation_Implementation(uint8 clientRoll, uint32 view)
{

}

void UDBDCharacterMovementComponent::Server_RemoveMaxSpeedMovementCurve_Implementation(float timestamp, const uint32 curveNetId, const EMovementCurveType movementCurveType)
{

}

void UDBDCharacterMovementComponent::Server_PlayMontage_Implementation(float timestamp, const FMontagePlaybackDefinition montagePlaybackDefinition)
{

}

void UDBDCharacterMovementComponent::Server_MovementTimeSync_Implementation(uint64 clientTimeSync)
{

}

bool UDBDCharacterMovementComponent::Server_MovementTimeSync_Validate(uint64 clientTimeSync)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_Launch_Implementation(float timestamp, FVector launchVelocity, int32 launchCallCount)
{

}

void UDBDCharacterMovementComponent::Server_AddMaxSpeedMovementCurve_Implementation(float timestamp, const uint32 curveNetId, float duration, float startOffset, const EMovementCurveType movementCurveType)
{

}

void UDBDCharacterMovementComponent::OnPreMontageStop(const FMontageStopDefinition montageDefinition, const UAnimMontage* montage)
{

}

void UDBDCharacterMovementComponent::OnMontageStarted(const FMontagePlaybackDefinition& montageDefinition, const UAnimMontage* montage)
{

}

void UDBDCharacterMovementComponent::Client_TeleportTo_Implementation(FVector_NetQuantize100 location, FYawAndPitchRotator_NetQuantize32 rotation)
{

}

void UDBDCharacterMovementComponent::Client_Stop_Implementation()
{

}

void UDBDCharacterMovementComponent::Client_RequestAllIncreaseMovementSpeed_Implementation()
{

}

void UDBDCharacterMovementComponent::Client_PreventMovement_Implementation(const bool value)
{

}

void UDBDCharacterMovementComponent::Client_Cheat_SetMaxSpeedMultiplier_Implementation(const float maxSpeedMultiplier)
{

}

UDBDCharacterMovementComponent::UDBDCharacterMovementComponent()
{
	this->ProjectedWallSlidingFactor = 1.000000;
	this->RandomInputFrontMultiplier = 0.800000;
	this->RandomInputSideMultiplier = 1.000000;
	this->RandomInputBackMultiplier = 0.200000;
	this->_forceUseDropStaggerFix = false;
	this->_maxSpeedMultiplierCurvesToRemoveOnTheServer = TArray<UCurveFloat*>();
	this->_velocityAdditiveStrategy = NULL;
	this->_inputAccelerationConstraintStrategy = NULL;
	this->_rotationStrategy = NULL;
	this->_lookAtTarget = NULL;
}
