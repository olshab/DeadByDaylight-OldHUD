#pragma once

#include "CoreMinimal.h"
#include "StatusEffectsProperties.h"
#include "ItemAddon.h"
#include "SpawnStatusEffectsOnKillerAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class USpawnStatusEffectsOnKillerAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FStatusEffectsProperties> _statusEffectsToSpawn;

	UPROPERTY(Transient, Export)
	TArray<TWeakObjectPtr<UStatusEffect>> _imposedStatusEffects;

public:
	USpawnStatusEffectsOnKillerAddon();
};

FORCEINLINE uint32 GetTypeHash(const USpawnStatusEffectsOnKillerAddon) { return 0; }
