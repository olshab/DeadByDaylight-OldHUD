#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "S32P02.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US32P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _hitDistanceToTriggerPerkEffect;

	UPROPERTY(EditDefaultsOnly)
	float _healingProgressionIncreasedOnHit;

	UPROPERTY(EditDefaultsOnly)
	float _tresholdToHealCompletely;

public:
	UFUNCTION(BlueprintPure)
	float GetHitDistanceAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHealingProgressionIncreaseAtLevel() const;

public:
	US32P02();
};

FORCEINLINE uint32 GetTypeHash(const US32P02) { return 0; }
