#pragma once

#include "CoreMinimal.h"
#include "ExposedEffect.h"
#include "ActivatableExposedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UActivatableExposedEffect : public UExposedEffect
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void Authority_Start(const float duration);

public:
	UActivatableExposedEffect();
};

FORCEINLINE uint32 GetTypeHash(const UActivatableExposedEffect) { return 0; }
