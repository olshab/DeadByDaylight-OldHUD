#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "Addon_K27Power_09StatusEffect.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K27Power_09StatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _condemnNeededForBlind;

	UPROPERTY(Transient, Export)
	UStatusEffect* _blindnessEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _blindnessStatusEffectClass;

private:
	UFUNCTION()
	void Authority_OnSurviorCondemnChange(ACamperPlayer* player, float condemnLevel);

public:
	UAddon_K27Power_09StatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K27Power_09StatusEffect) { return 0; }
