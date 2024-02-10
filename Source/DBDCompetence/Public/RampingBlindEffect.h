#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "RampingBlindEffect.generated.h"

class UBlindableComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API URampingBlindEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UBlindableComponent* _ownerBlindable;

public:
	URampingBlindEffect();
};

FORCEINLINE uint32 GetTypeHash(const URampingBlindEffect) { return 0; }
