#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "EHudScreenIndicatorType.h"
#include "StatusEffect.h"
#include "K33SurvivorDetectedFromTunnelStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33SurvivorDetectedFromTunnelStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeBetweenFootsteps;

	UPROPERTY(EditDefaultsOnly)
	EHudScreenIndicatorType _offscreenIndicatorType;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _offscreenIndicatorMinVisibleDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _offscreenIndicatorLifetime;

	UPROPERTY(EditDefaultsOnly)
	float _indicatorLerpMultiplierSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _aboveKillerHeadRange;

public:
	UK33SurvivorDetectedFromTunnelStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK33SurvivorDetectedFromTunnelStatusEffect) { return 0; }
