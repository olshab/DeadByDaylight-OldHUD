#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K31Power_03.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UAddon_K31Power_03 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _actionSpeedEffect;

	UPROPERTY(EditDefaultsOnly)
	float _actionSpeedEffectDuration;

public:
	UAddon_K31Power_03();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K31Power_03) { return 0; }
