#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "InsidiousEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UInsidiousEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UInsidiousEffect();
};

FORCEINLINE uint32 GetTypeHash(const UInsidiousEffect) { return 0; }
