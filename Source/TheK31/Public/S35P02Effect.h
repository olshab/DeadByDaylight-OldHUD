#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "S35P02Effect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API US35P02Effect : public UStatusEffect
{
	GENERATED_BODY()

public:
	US35P02Effect();
};

FORCEINLINE uint32 GetTypeHash(const US35P02Effect) { return 0; }
