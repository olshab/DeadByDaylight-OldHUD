#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "S38P02StatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US38P02StatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FName _headJointName;

public:
	US38P02StatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const US38P02StatusEffect) { return 0; }
