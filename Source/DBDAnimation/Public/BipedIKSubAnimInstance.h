#pragma once

#include "CoreMinimal.h"
#include "DBDBaseAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BipedIKSubAnimInstance.generated.h"

class UWorld;
class USkeletalMeshComponent;

UCLASS(NonTransient)
class DBDANIMATION_API UBipedIKSubAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _enableIK;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isIdle;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ETraceTypeQuery> _traceTypeQuery;

	UPROPERTY(EditDefaultsOnly)
	bool _traceComplex;

	UPROPERTY(EditDefaultsOnly)
	bool _ignoreTouches;

	UPROPERTY(EditDefaultsOnly)
	FName _noGroundTag;

	UPROPERTY(EditDefaultsOnly)
	float _footIkSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisIkSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _maxExtensionLeftFoot;

	UPROPERTY(EditDefaultsOnly)
	float _maxExtensionRightFoot;

	UPROPERTY(EditDefaultsOnly)
	float _footIkSpeedMovingHF2;

	UPROPERTY(EditDefaultsOnly)
	float _footIkSpeedIdleHF2;

	UPROPERTY(EditDefaultsOnly)
	float _ikBlendSpeedHF2;

	UPROPERTY(EditDefaultsOnly)
	float _footIkRotationSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisIkSpeedHF2;

	UPROPERTY(EditDefaultsOnly)
	float _maxIKTargetDistance;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisPositionOffsetMin;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisPositionOffsetMax;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisPositionOffsetMinHF2;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisPositionOffsetMaxHF2;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisPositionOffsetMinIdleHF2;

	UPROPERTY(EditDefaultsOnly)
	float _pelvisPositionOffsetMaxIdleHF2;

	UPROPERTY(EditDefaultsOnly)
	float _frontFeetLineTraceStartOffset;

	UPROPERTY(EditDefaultsOnly)
	float _frontFeetLineTraceEndOffset;

	UPROPERTY(EditDefaultsOnly)
	float _backFeetLineTraceStartOffset;

	UPROPERTY(EditDefaultsOnly)
	float _backFeetLineTraceEndOffset;

	UPROPERTY(EditDefaultsOnly)
	float _minDistanceFromCapsuleIdle;

	UPROPERTY(EditDefaultsOnly)
	float _maxDistanceFromCapsuleIdle;

	UPROPERTY(EditDefaultsOnly)
	float _minDistanceFromCapsuleMoving;

	UPROPERTY(EditDefaultsOnly)
	float _maxDistanceFromCapsuleMoving;

	UPROPERTY(EditDefaultsOnly)
	FName _pelvisSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _leftBackFootSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _rightBackFootSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _leftBackFootBoneName;

	UPROPERTY(EditDefaultsOnly)
	FName _rightBackFootBoneName;

	UPROPERTY(EditDefaultsOnly)
	FName _leftBackFootRootBoneName;

	UPROPERTY(EditDefaultsOnly)
	FName _rightBackFootRootBoneName;

	UPROPERTY(BlueprintReadOnly)
	FVector _pelvisPositionOffset;

	UPROPERTY(BlueprintReadOnly)
	FVector _leftBackFootLocation;

	UPROPERTY(BlueprintReadOnly)
	FVector _rightBackFootLocation;

	UPROPERTY(BlueprintReadOnly)
	FTransform _leftBackFootTransform;

	UPROPERTY(BlueprintReadOnly)
	FTransform _rightBackFootTransform;

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
	UBipedIKSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBipedIKSubAnimInstance) { return 0; }
