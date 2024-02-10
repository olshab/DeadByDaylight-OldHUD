#pragma once

#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "TrailEffectLastingTimeBaseAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTrailEffectLastingTimeBaseAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _modifySurvivorTrailEffectLastingTimeEffect;

	UPROPERTY(EditDefaultsOnly)
	float _trailEffectLastingTimeModifierValue;

public:
	UTrailEffectLastingTimeBaseAddon();
};

FORCEINLINE uint32 GetTypeHash(const UTrailEffectLastingTimeBaseAddon) { return 0; }
