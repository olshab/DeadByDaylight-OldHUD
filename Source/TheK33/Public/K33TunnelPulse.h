#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PoolableActor.h"
#include "K33TunnelPulse.generated.h"

class UCurveFloat;

UCLASS()
class THEK33_API AK33TunnelPulse : public AActor, public IPoolableActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _lastPulseForwardOffset;

	UPROPERTY(EditDefaultsOnly)
	float _lastPulseUpOffset;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _sideOffsetCurveMultiplier;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _firstTunnelBlockSideOffsetCurveMultiplier;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _lastTunnelBlockSideOffsetCurveMultiplier;

	UPROPERTY(EditDefaultsOnly)
	float _sideOffsetSize;

protected:
	UFUNCTION(BlueprintPure)
	float Cosmetic_GetFadeOutPercentage() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DeactivatePulse();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivatePulse(int32 idInPulseWave);

public:
	AK33TunnelPulse();
};

FORCEINLINE uint32 GetTypeHash(const AK33TunnelPulse) { return 0; }
