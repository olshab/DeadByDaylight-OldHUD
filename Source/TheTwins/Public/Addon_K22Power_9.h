#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K22Power_9.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_9 : public UOnEventBaseAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _blindnessStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _blindnessDuration;

public:
	UAddon_K22Power_9();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_9) { return 0; }
