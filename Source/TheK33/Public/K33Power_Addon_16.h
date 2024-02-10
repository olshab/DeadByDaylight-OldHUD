#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "K33Power_Addon_16.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33Power_Addon_16 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _activationLifetime;

	UPROPERTY(EditDefaultsOnly)
	float _survivorRangeDistanceFromKillerToTriggerEffect;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TriggerSurvivorsScreamAndReveal(const TArray<ACamperPlayer*>& targetSurvivors);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void BP_TriggerSurvivorScreamAndReveal(ACamperPlayer* targetSurvivor);

public:
	UK33Power_Addon_16();
};

FORCEINLINE uint32 GetTypeHash(const UK33Power_Addon_16) { return 0; }
