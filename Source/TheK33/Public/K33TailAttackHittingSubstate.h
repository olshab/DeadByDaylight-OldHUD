#pragma once

#include "CoreMinimal.h"
#include "PounceAttackHittingSubstate.h"
#include "DBDTunableRowHandle.h"
#include "K33TailAttackHittingSubstate.generated.h"

class UCurveFloat;

UCLASS()
class THEK33_API UK33TailAttackHittingSubstate : public UPounceAttackHittingSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _useGamepadEmulationForYaw;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _yawSpeedResetSmoothingTime;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _attackSphereTraceRadius;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _tailAttackLength;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _tailMovementCurve;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _tailAttackFromYOffset;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _tailAttackStartHeight;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _tailAttackEndHeight;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _tailAttackEndPointInitialHeightOffset;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _tailAttackEndPointEndHeightOffset;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _maxSweepLength;

	UPROPERTY(EditDefaultsOnly)
	float _minDistanceForFarObstructionHit;

public:
	UK33TailAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK33TailAttackHittingSubstate) { return 0; }
