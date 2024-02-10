#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "RustedSpikeAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class URustedSpikeAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _mangledStatusEffectClass;

public:
	URustedSpikeAddon();
};

FORCEINLINE uint32 GetTypeHash(const URustedSpikeAddon) { return 0; }
