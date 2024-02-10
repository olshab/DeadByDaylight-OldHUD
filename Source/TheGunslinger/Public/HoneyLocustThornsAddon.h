#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "HoneyLocustThornsAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHoneyLocustThornsAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _mangledStatusEffectClass;

public:
	UHoneyLocustThornsAddon();
};

FORCEINLINE uint32 GetTypeHash(const UHoneyLocustThornsAddon) { return 0; }
