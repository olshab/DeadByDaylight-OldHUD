#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_TormentMode_19.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TormentMode_19 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _undetectableInTormentTrailLingeringStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _lingerDuration;

public:
	UAddon_TormentMode_19();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TormentMode_19) { return 0; }
