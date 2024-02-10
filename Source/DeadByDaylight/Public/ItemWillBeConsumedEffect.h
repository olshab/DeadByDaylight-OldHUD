#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ItemWillBeConsumedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UItemWillBeConsumedEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UItemWillBeConsumedEffect();
};

FORCEINLINE uint32 GetTypeHash(const UItemWillBeConsumedEffect) { return 0; }
