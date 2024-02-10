#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_Hillbilly_18.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_Hillbilly_18 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _undetectableStatusEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _undetectableStatusEffect;

public:
	UAddon_Hillbilly_18();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Hillbilly_18) { return 0; }
