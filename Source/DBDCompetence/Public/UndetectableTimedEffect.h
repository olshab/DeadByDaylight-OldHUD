#pragma once

#include "CoreMinimal.h"
#include "TimedStatusEffect.h"
#include "UndetectableTimedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UUndetectableTimedEffect : public UTimedStatusEffect
{
	GENERATED_BODY()

public:
	UUndetectableTimedEffect();
};

FORCEINLINE uint32 GetTypeHash(const UUndetectableTimedEffect) { return 0; }
