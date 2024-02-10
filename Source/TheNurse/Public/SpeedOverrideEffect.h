#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "SpeedOverrideEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API USpeedOverrideEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	USpeedOverrideEffect();
};

FORCEINLINE uint32 GetTypeHash(const USpeedOverrideEffect) { return 0; }
