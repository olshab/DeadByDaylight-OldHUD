#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K31Power_13.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UAddon_K31Power_13 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exhaustedEffectClass;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _exhaustedEffectDurationSeconds;

public:
	UAddon_K31Power_13();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K31Power_13) { return 0; }
