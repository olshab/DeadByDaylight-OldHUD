#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "K33KillerStunnedByTurretStatusEffect.generated.h"

class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33KillerStunnedByTurretStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _movementSpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _movementSpeedDuration;

public:
	UK33KillerStunnedByTurretStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK33KillerStunnedByTurretStatusEffect) { return 0; }
