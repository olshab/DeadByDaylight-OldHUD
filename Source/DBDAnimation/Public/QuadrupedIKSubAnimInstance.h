#pragma once

#include "CoreMinimal.h"
#include "DBDBaseAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "QuadrupedIKSubAnimInstance.generated.h"

class UWorld;
class USkeletalMeshComponent;

UCLASS(NonTransient)
class DBDANIMATION_API UQuadrupedIKSubAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _enableIK;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ETraceTypeQuery> _traceTypeQuery;

	UPROPERTY(EditDefaultsOnly)
	bool _traceComplex;

	UPROPERTY(EditDefaultsOnly)
	bool _ignoreTouches;

	UPROPERTY(EditDefaultsOnly)
	FName _noGroundTag;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _adjustCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _adjustTail;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _firstPersonView;

	UPROPERTY(EditDefaultsOnly)
	float _footIkSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisIkSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisIkSpeedFPV;

	UPROPERTY(EditDefaultsOnly)
	float _maxIKTargetDistance;

	UPROPERTY(EditDefaultsOnly)
	float _maxBoneDistanceFromTargetMoving;

	UPROPERTY(EditDefaultsOnly)
	float _maxBoneDistanceFromTargetIdle;

	UPROPERTY(EditDefaultsOnly)
	float _minDistanceFromCapsuleFrontFeetIdle;

	UPROPERTY(EditDefaultsOnly)
	float _maxDistanceFromCapsuleFrontFeetIdle;

	UPROPERTY(EditDefaultsOnly)
	float _minDistanceFromCapsuleBackFeetIdle;

	UPROPERTY(EditDefaultsOnly)
	float _maxDistanceFromCapsuleBackFeetIdle;

	UPROPERTY(EditDefaultsOnly)
	float _minDistanceFromCapsuleFrontFeetMoving;

	UPROPERTY(EditDefaultsOnly)
	float _maxDistanceFromCapsuleFrontFeetMoving;

	UPROPERTY(EditDefaultsOnly)
	float _minDistanceFromCapsuleBackFeetMoving;

	UPROPERTY(EditDefaultsOnly)
	float _maxDistanceFromCapsuleBackFeetMoving;

	UPROPERTY(EditDefaultsOnly)
	float _maxIKTargetDistanceFromPose;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisRotationMinOffset;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisRotationMaxOffset;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisPositionOffsetMin;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisPositionOffsetMax;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisPositionOffsetMinFPV;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisPositionOffsetMaxFPV;

	UPROPERTY(EditDefaultsOnly)
	float _frontFeetLineTraceStartOffset;

	UPROPERTY(EditDefaultsOnly)
	float _frontFeetLineTraceEndOffset;

	UPROPERTY(EditDefaultsOnly)
	float _backFeetLineTraceStartOffset;

	UPROPERTY(EditDefaultsOnly)
	float _backFeetLineTraceEndOffset;

	UPROPERTY(EditDefaultsOnly)
	float _frontFeetUpDisplacement;

	UPROPERTY(EditDefaultsOnly)
	float _frontFeetDownDisplacement;

	UPROPERTY(EditDefaultsOnly)
	float _backFeetUpDisplacement;

	UPROPERTY(EditDefaultsOnly)
	float _backFeetDownDisplacement;

	UPROPERTY(EditDefaultsOnly)
	float _footDistance;

	UPROPERTY(EditDefaultsOnly)
	float _isMovingTolerance;

	UPROPERTY(EditDefaultsOnly)
	float _ungroundedFeetDistance;

	UPROPERTY(EditDefaultsOnly)
	FName _pelvisSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _cameraSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _tailSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _leftFrontFootSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _leftFrontFootPoleSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _rightFrontFootSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _rightFrontFootPoleSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _leftBackFootSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _rightBackFootSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _leftFrontFootBoneName;

	UPROPERTY(EditDefaultsOnly)
	FName _rightFrontFootBoneName;

	UPROPERTY(EditDefaultsOnly)
	FName _leftBackFootBoneName;

	UPROPERTY(EditDefaultsOnly)
	FName _rightBackFootBoneName;

	UPROPERTY(EditDefaultsOnly)
	FName _leftFrontFootRootSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _rightFrontFootRootSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _leftBackFootRootSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _rightBackFootRootSocketName;

	UPROPERTY(EditDefaultsOnly)
	float _leftFrontFootMaxExtension;

	UPROPERTY(EditDefaultsOnly)
	float _rightFrontFootMaxExtension;

	UPROPERTY(EditDefaultsOnly)
	float _leftBackFootMaxExtension;

	UPROPERTY(EditDefaultsOnly)
	float _rightBackFootMaxExtension;

	UPROPERTY(EditDefaultsOnly)
	float _leftFrontFootUngroundedTolerance;

	UPROPERTY(EditDefaultsOnly)
	float _rightFrontFootUngroundedTolerance;

	UPROPERTY(EditDefaultsOnly)
	float _leftBackFootUngroundedTolerance;

	UPROPERTY(EditDefaultsOnly)
	float _rightBackFootUngroundedTolerance;

	UPROPERTY(BlueprintReadOnly)
	FVector _pelvisPositionOffset;

	UPROPERTY(BlueprintReadOnly)
	FRotator _worldPitch;

	UPROPERTY(BlueprintReadOnly)
	FRotator _cameraRotationOffset;

	UPROPERTY(BlueprintReadOnly)
	FVector _cameraPositionOffset;

	UPROPERTY(BlueprintReadOnly)
	FRotator _tailRotationOffset;

	UPROPERTY(BlueprintReadOnly)
	FVector _tailPositionOffset;

	UPROPERTY(BlueprintReadOnly)
	FVector _leftFrontFootLocation;

	UPROPERTY(BlueprintReadOnly)
	FVector _leftFrontFootPoleLocation;

	UPROPERTY(BlueprintReadOnly)
	FVector _leftFrontFootPoleCurrentLocation;

	UPROPERTY(BlueprintReadOnly)
	FVector _rightFrontFootPoleCurrentLocation;

	UPROPERTY(BlueprintReadOnly)
	FVector _rightFrontFootLocation;

	UPROPERTY(BlueprintReadOnly)
	FVector _rightFrontFootPoleLocation;

	UPROPERTY(BlueprintReadOnly)
	FVector _leftBackFootLocation;

	UPROPERTY(BlueprintReadOnly)
	FVector _rightBackFootLocation;

	UPROPERTY(BlueprintReadOnly)
	FTransform _leftBackFootTransform;

	UPROPERTY(BlueprintReadOnly)
	FTransform _rightBackFootTransform;

	UPROPERTY(BlueprintReadOnly)
	FRotator _leftFrontFootRotation;

	UPROPERTY(BlueprintReadOnly)
	FRotator _rightFrontFootRotation;

	UPROPERTY(BlueprintReadOnly)
	FRotator _leftBackFootRotation;

	UPROPERTY(BlueprintReadOnly)
	FRotator _rightBackFootRotation;

private:
	UPROPERTY(Transient, Export)
	USkeletalMeshComponent* _skeletalMeshComponent;

	UPROPERTY(Transient)
	UWorld* _world;

public:
	UQuadrupedIKSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UQuadrupedIKSubAnimInstance) { return 0; }
