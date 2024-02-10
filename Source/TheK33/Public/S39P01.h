#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S39P01.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class US39P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _bloodAndGruntSuppressionTime;

	UPROPERTY(EditDefaultsOnly)
	float _survivorAuraRevealTime;

	UPROPERTY(EditDefaultsOnly)
	float _generatorAuraRevealTime;

	UPROPERTY(EditDefaultsOnly)
	float _perkCooldownTime;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _suppressBloodAndGruntsEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealSurvivorAurasEffectClass;

public:
	UFUNCTION(BlueprintPure)
	float GetSurvivorAuraRevealTime() const;

	UFUNCTION(BlueprintPure)
	float GetPerkCooldownTimeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetGeneratorAuraRevealTime() const;

	UFUNCTION(BlueprintPure)
	float GetBloodAndGruntSuppressionTimeAtLevel() const;

public:
	US39P01();
};

FORCEINLINE uint32 GetTypeHash(const US39P01) { return 0; }
