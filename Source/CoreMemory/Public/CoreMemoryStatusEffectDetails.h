#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoreMemoryStatusEffectDetails.generated.h"

class UStatusEffect;

USTRUCT()
struct FCoreMemoryStatusEffectDetails
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _statusEffect;

	UPROPERTY(EditDefaultsOnly)
	FString _effectDurationParamKey;

	UPROPERTY(EditDefaultsOnly)
	FString _customEffectParamKey;

	UPROPERTY(EditDefaultsOnly)
	float _effectDuration;

	UPROPERTY(EditDefaultsOnly)
	float _customEffectParam;

public:
	COREMEMORY_API FCoreMemoryStatusEffectDetails();
};

FORCEINLINE uint32 GetTypeHash(const FCoreMemoryStatusEffectDetails) { return 0; }
