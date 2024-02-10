#pragma once

#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K22Power_11.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_11 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _survivorRemoveTwinMaxChargeAdditiveEffect;

	UPROPERTY(EditDefaultsOnly)
	float _increaseRemoveTwinTime;

public:
	UAddon_K22Power_11();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_11) { return 0; }
