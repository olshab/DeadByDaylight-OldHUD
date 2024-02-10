#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "K32OverheatStatusEffectBase.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK32OverheatStatusEffectBase : public UStatusEffect
{
	GENERATED_BODY()

public:
	UK32OverheatStatusEffectBase();
};

FORCEINLINE uint32 GetTypeHash(const UK32OverheatStatusEffectBase) { return 0; }
