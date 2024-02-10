#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K22Power_14.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_14 : public UOnEventBaseAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _brokenStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _brokenDuration;

public:
	UAddon_K22Power_14();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_14) { return 0; }
