#pragma once

#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "InK32PodZoneLingeringEffect.generated.h"

class AK32KillerPod;

UCLASS(meta=(BlueprintSpawnableComponent))
class UInK32PodZoneLingeringEffect : public UBaseLingeringStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _range;

	UPROPERTY(Transient)
	TArray<AK32KillerPod*> _podsInRange;

private:
	UFUNCTION()
	void Authority_OnKillerPodDisabledChanged(const bool isDisabled);

	UFUNCTION()
	void Authority_OnKillerPodAcquiredChanged(const bool isAcquired);

public:
	UInK32PodZoneLingeringEffect();
};

FORCEINLINE uint32 GetTypeHash(const UInK32PodZoneLingeringEffect) { return 0; }
