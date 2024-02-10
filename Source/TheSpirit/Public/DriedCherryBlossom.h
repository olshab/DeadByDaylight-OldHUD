#pragma once

#include "CoreMinimal.h"
#include "SimpleSpawnEffectsOnAllSurvivorsAddon.h"
#include "Templates/SubclassOf.h"
#include "DriedCherryBlossom.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDriedCherryBlossom : public USimpleSpawnEffectsOnAllSurvivorsAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _spiritDriedCherryBlossomStatusEffectClass;

public:
	UDriedCherryBlossom();
};

FORCEINLINE uint32 GetTypeHash(const UDriedCherryBlossom) { return 0; }
