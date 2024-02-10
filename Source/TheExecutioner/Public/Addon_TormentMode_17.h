#pragma once

#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_TormentMode_17.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TormentMode_17 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _agonyObliviousStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _obliviousDuration;

public:
	UAddon_TormentMode_17();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TormentMode_17) { return 0; }
