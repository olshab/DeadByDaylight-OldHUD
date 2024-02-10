#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_TheBlight_19.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_19 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timedRevealToKillerEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _survivorInRangeDistance;

	UPROPERTY(EditDefaultsOnly)
	float _survivorRevealTime;

public:
	UAddon_TheBlight_19();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_19) { return 0; }
