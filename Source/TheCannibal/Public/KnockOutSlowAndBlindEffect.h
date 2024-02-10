#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "KnockOutSlowAndBlindEffect.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UKnockOutSlowAndBlindEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLocallyObservedChanged(ADBDPlayer* player);

public:
	UKnockOutSlowAndBlindEffect();
};

FORCEINLINE uint32 GetTypeHash(const UKnockOutSlowAndBlindEffect) { return 0; }
