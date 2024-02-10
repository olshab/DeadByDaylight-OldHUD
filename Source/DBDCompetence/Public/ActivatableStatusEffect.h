#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ActivatableStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UActivatableStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void Authority_Start(const float duration);

public:
	UActivatableStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UActivatableStatusEffect) { return 0; }
