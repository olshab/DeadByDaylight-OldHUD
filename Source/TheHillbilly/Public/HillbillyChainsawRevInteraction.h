#pragma once

#include "CoreMinimal.h"
#include "ChainsawRevInteraction.h"
#include "HillbillyChainsawRevInteraction.generated.h"

class UChargeableComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHillbillyChainsawRevInteraction : public UChainsawRevInteraction
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void OnChargeablePercentChange(UChargeableComponent* chargeableComponent, float totalPercentComplete);

public:
	UHillbillyChainsawRevInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawRevInteraction) { return 0; }
