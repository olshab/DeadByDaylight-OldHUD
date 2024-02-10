#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "LeaderEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ULeaderEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	ULeaderEffect();
};

FORCEINLINE uint32 GetTypeHash(const ULeaderEffect) { return 0; }
