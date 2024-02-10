#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "DischargeUntilThresholdIsReachedComponent.generated.h"

class UChargeableComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDischargeUntilThresholdIsReachedComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _threshold;

	UPROPERTY(Transient, Export)
	UChargeableComponent* _chargeableComponent;

private:
	UFUNCTION()
	void OnChargePercentChanged(UChargeableComponent* chargeableComponent, float totalPercentComplete);

	UFUNCTION()
	void Authority_OnChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	UDischargeUntilThresholdIsReachedComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDischargeUntilThresholdIsReachedComponent) { return 0; }
