#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "K32EmpInteraction.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK32_API UK32EmpInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _chargingSpeedCurve;

public:
	UK32EmpInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK32EmpInteraction) { return 0; }
