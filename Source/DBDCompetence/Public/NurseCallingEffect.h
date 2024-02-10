#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "NurseCallingEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UNurseCallingEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UNurseCallingEffect();
};

FORCEINLINE uint32 GetTypeHash(const UNurseCallingEffect) { return 0; }
