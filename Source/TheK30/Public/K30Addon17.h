#pragma once

#include "CoreMinimal.h"
#include "K30ApplyStatusOnWakeUpAddon.h"
#include "Templates/SubclassOf.h"
#include "K30Addon17.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK30Addon17 : public UK30ApplyStatusOnWakeUpAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealAuraToKillerEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _distanceForScreams;

	UPROPERTY(EditDefaultsOnly)
	float _dealyForScreams;

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnMakeSurvivorScream(ADBDPlayer* player, const float lifetime);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_RevealAndMakeSurvivorScream(ADBDPlayer* survivorPlayer, const float screamRevealDuration);

public:
	UK30Addon17();
};

FORCEINLINE uint32 GetTypeHash(const UK30Addon17) { return 0; }
