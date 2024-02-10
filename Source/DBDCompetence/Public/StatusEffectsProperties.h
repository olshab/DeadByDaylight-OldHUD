#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectsProperties.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FStatusEffectsProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> StatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float CustomParam;

public:
	DBDCOMPETENCE_API FStatusEffectsProperties();
};

FORCEINLINE uint32 GetTypeHash(const FStatusEffectsProperties) { return 0; }
