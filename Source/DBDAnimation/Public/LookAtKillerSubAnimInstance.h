#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "LookAtKillerSubAnimInstance.generated.h"

class ADBDPlayer;
class ASlasherPlayer;
class USkeletalMeshComponent;

UCLASS(NonTransient)
class DBDANIMATION_API ULookAtKillerSubAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Transient)
	ADBDPlayer* _owningPawn;

	UPROPERTY(BlueprintReadWrite, Transient)
	ASlasherPlayer* _owningKiller;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _enableDynamics;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _dynamicsAlpha;

	UPROPERTY(BlueprintReadOnly)
	bool _shouldApplyDynamics;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _blendTime;

	UPROPERTY(BlueprintReadOnly)
	float _animYaw;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _enableTurnInPlace;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _shouldResetLookAtOnAnyMontagePlay;

	UPROPERTY(BlueprintReadOnly)
	bool _shouldTurnLeft;

	UPROPERTY(BlueprintReadOnly)
	bool _shouldTurnRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _turnInPlaceThresholdAngle;

	UPROPERTY(BlueprintReadOnly)
	float _idleNeutralRotationYaw;

	UPROPERTY(BlueprintReadOnly)
	bool _isIdle;

private:
	UPROPERTY(Transient, Export)
	USkeletalMeshComponent* _skeletalMeshComponent;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsLookAtAllowed() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetBlendDuration() const;

public:
	ULookAtKillerSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const ULookAtKillerSubAnimInstance) { return 0; }
