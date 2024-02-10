#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EImposeEffectTo.h"
#include "StatusEffectInfo.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FStatusEffectInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float StatusEffectLifetime;

	UPROPERTY(EditDefaultsOnly)
	float CustomParamValue;

	UPROPERTY(EditDefaultsOnly)
	EImposeEffectTo ImposeEffectTo;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> StatusEffect;

public:
	DBDCOMPETENCE_API FStatusEffectInfo();
};

FORCEINLINE uint32 GetTypeHash(const FStatusEffectInfo) { return 0; }
