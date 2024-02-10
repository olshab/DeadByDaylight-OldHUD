#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "SpasmodicBreathAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API USpasmodicBreathAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _spasmodicBreathIndicatorStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _speedEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _speedEffect;

	UPROPERTY(Transient, Export)
	UStatusEffect* _indicatorEffect;

	UPROPERTY(EditDefaultsOnly)
	float _speedModifier;

	UPROPERTY(EditDefaultsOnly)
	float _activationDuration;

public:
	USpasmodicBreathAddon();
};

FORCEINLINE uint32 GetTypeHash(const USpasmodicBreathAddon) { return 0; }
