#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Starstruck.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UStarstruck : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _exposedEffectDuration;

	UPROPERTY(EditDefaultsOnly)
	float _perkCooldownDuration;

	UPROPERTY(Transient, Export)
	TMap<TWeakObjectPtr<ACamperPlayer>, TWeakObjectPtr<UStatusEffect>> _camperExposedEffects;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exposedEffectClass;

public:
	UFUNCTION(BlueprintPure)
	float GetPerkCooldownDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetExposedEffectDurationAtLevel() const;

public:
	UStarstruck();
};

FORCEINLINE uint32 GetTypeHash(const UStarstruck) { return 0; }
