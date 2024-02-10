#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "K32KillerProjectileSpawnChargeableInteractionDefinition.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32KillerProjectileSpawnChargeableInteractionDefinition : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _reloadTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _secondsToCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _dechargeRate;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPodShot();

public:
	UK32KillerProjectileSpawnChargeableInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK32KillerProjectileSpawnChargeableInteractionDefinition) { return 0; }
