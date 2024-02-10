#pragma once

#include "CoreMinimal.h"
#include "DBDBaseAnimInstance.h"
#include "K33TurretAnimInstance.generated.h"

UCLASS(NonTransient)
class UK33TurretAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isInPool;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isInsideControlStation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isBeingCollected;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isCarryable;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isAttachedToSurvivor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isBeingDeployed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isDeployCancelled;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isDeployed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isBeingUndeployed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isUndeployCancelled;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isFiring;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isOverheated;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isBeingRepaired;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isDestroyed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float _isFiringAlpha;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool _isMalfunctioning;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float _animYaw;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float _frontLegPitch;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float _backLegsPitch;

public:
	UK33TurretAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretAnimInstance) { return 0; }
