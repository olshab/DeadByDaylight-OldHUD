#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawningEffectOnGameEventData.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FSpawningEffectOnGameEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> StatusEffect;

	UPROPERTY(EditDefaultsOnly)
	float CustomParameter;

	UPROPERTY(EditDefaultsOnly)
	float Lifetime;

public:
	DBDCOMPETENCE_API FSpawningEffectOnGameEventData();
};

FORCEINLINE uint32 GetTypeHash(const FSpawningEffectOnGameEventData) { return 0; }
