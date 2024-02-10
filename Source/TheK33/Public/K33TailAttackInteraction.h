#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "K33TailAttackInteraction.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK33TailAttackInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _interactionViewPitchMax;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _interactionViewPitchMin;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _cancelAttackMovementSlowdownDuration;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _cancelAttackMovementSlowdownCurve;

public:
	UK33TailAttackInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK33TailAttackInteraction) { return 0; }
