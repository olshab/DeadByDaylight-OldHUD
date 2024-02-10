#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K27Power_09.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K27Power_09 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _addonStatusEffect;

public:
	UAddon_K27Power_09();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K27Power_09) { return 0; }
