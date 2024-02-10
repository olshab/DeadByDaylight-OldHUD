#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "ETotemState.h"
#include "Templates/SubclassOf.h"
#include "K34P01.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK34P01 : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _rampingBlindEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _rampingBlindRampTime;

	UPROPERTY(EditDefaultsOnly)
	int32 _stunnedOrBlindedTimesRequired;

	UPROPERTY(EditDefaultsOnly)
	float _blindedEffectTime;

private:
	UFUNCTION(Client, Unreliable)
	void Client_UpdateHudIcon(float percent);

	UFUNCTION()
	void Authority_OnTotemStateChanged(const ETotemState oldState, const ETotemState newState);

public:
	UK34P01();
};

FORCEINLINE uint32 GetTypeHash(const UK34P01) { return 0; }
