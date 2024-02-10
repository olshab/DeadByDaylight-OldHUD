#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "BadMansLastBreathAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UBadMansLastBreathAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _activationDuration;

	UPROPERTY(EditDefaultsOnly)
	float _cooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _badMansLastBreathCooldownIndicatorStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _badMansLastBreathUndetectableStatusEffect;

	UPROPERTY(Transient, Export)
	UStatusEffect* _cooldownIndicator;

	UPROPERTY(Transient, Export)
	UStatusEffect* _undetectableEffect;

public:
	UBadMansLastBreathAddon();
};

FORCEINLINE uint32 GetTypeHash(const UBadMansLastBreathAddon) { return 0; }
