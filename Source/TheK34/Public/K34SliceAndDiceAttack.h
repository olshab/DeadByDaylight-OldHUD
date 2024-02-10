#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "DBDTunableRowHandle.h"
#include "K34SliceAndDiceAttack.generated.h"

class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK34SliceAndDiceAttack : public UPounceAttack
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _attackZoneScaleFactor;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _mouseMaxTurnAngleCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _controllerMaxTurnAngleCurve;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _turnRateLimit;

	UPROPERTY(EditDefaultsOnly)
	float _endChaseAfterHitBuffer;

public:
	UK34SliceAndDiceAttack();
};

FORCEINLINE uint32 GetTypeHash(const UK34SliceAndDiceAttack) { return 0; }
