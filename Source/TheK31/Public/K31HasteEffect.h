#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "K31HasteEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UK31HasteEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UK31HasteEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK31HasteEffect) { return 0; }
