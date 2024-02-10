#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "HellshireIronAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHellshireIronAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _undetectableDurationPostHarpoon;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _undetectableTimedEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _statusEffect;

public:
	UHellshireIronAddon();
};

FORCEINLINE uint32 GetTypeHash(const UHellshireIronAddon) { return 0; }
