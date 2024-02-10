#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "LeproseLichenAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class ULeproseLichenAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timedRevealSurvivorEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _revealDuration;

	UPROPERTY(EditDefaultsOnly)
	float _portalSurvivorRange;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealSurvivorsWhenTeleportingClass;

public:
	ULeproseLichenAddon();
};

FORCEINLINE uint32 GetTypeHash(const ULeproseLichenAddon) { return 0; }
