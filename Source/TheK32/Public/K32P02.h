#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K32P02.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK32P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hinderedStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _perkRange;

	UPROPERTY(EditDefaultsOnly)
	float _hinderedEffectDuration;

	UPROPERTY(EditDefaultsOnly)
	float _perkCooldown;

public:
	UFUNCTION(BlueprintPure)
	float GetPerkRangeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetPerkCooldownAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHinderedEffectDurationAtLevel() const;

public:
	UK32P02();
};

FORCEINLINE uint32 GetTypeHash(const UK32P02) { return 0; }
