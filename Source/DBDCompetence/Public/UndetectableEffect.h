#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "UndetectableEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UUndetectableEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UUndetectableEffect();
};

FORCEINLINE uint32 GetTypeHash(const UUndetectableEffect) { return 0; }
