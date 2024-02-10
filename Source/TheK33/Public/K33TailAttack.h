#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "DBDTunableRowHandle.h"
#include "K33TailAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK33_API UK33TailAttack : public UPounceAttack
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _useGamepadEmulationForYaw;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _yawPitchSpeedSmoothingTime;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _yawSpeedResetSmoothingTime;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _yawScale;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _pitchScale;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _yawPitchDelayTime;

public:
	UK33TailAttack();
};

FORCEINLINE uint32 GetTypeHash(const UK33TailAttack) { return 0; }
