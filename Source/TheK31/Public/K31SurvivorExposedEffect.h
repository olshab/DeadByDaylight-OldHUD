#pragma once

#include "CoreMinimal.h"
#include "ExposedEffect.h"
#include "K31SurvivorExposedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UK31SurvivorExposedEffect : public UExposedEffect
{
	GENERATED_BODY()

public:
	UK31SurvivorExposedEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK31SurvivorExposedEffect) { return 0; }
