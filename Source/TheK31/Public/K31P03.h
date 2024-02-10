#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K31P03.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UK31P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _healPenalty;

	UPROPERTY(EditDefaultsOnly)
	float _reduceHealingSpeedEffectSeconds;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _reduceHealingSpeedEffectClass;

	UPROPERTY(Transient, Export)
	TArray<UStatusEffect*> _survivorDebuffs;

public:
	UFUNCTION(BlueprintPure)
	float GetReduceHealingSpeedEffectSeconds() const;

	UFUNCTION(BlueprintPure)
	float GetHealPenaltyAtLevel() const;

public:
	UK31P03();
};

FORCEINLINE uint32 GetTypeHash(const UK31P03) { return 0; }
