#pragma once

#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "K31UndetectableEffect.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31UndetectableEffect : public UBaseLingeringStatusEffect
{
	GENERATED_BODY()

public:
	UK31UndetectableEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK31UndetectableEffect) { return 0; }
