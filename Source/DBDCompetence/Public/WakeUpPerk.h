#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "WakeUpPerk.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UWakeUpPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _gateOpenSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _revealDistance;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _wakeUpShowExitGateAuraEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _wakeUpShowPlayerOnGateAuraEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _wakeUpOpenGateEffectClass;

public:
	UWakeUpPerk();
};

FORCEINLINE uint32 GetTypeHash(const UWakeUpPerk) { return 0; }
