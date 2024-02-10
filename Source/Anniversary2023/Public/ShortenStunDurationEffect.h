#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ShortenStunDurationEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UShortenStunDurationEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UShortenStunDurationEffect();
};

FORCEINLINE uint32 GetTypeHash(const UShortenStunDurationEffect) { return 0; }
