#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K31Power_02.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UAddon_K31Power_02 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _blindnessEffectClass;

public:
	UAddon_K31Power_02();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K31Power_02) { return 0; }
