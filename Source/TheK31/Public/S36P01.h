#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S36P01.generated.h"

class UStatusEffect;
class UActivatableExhaustedEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API US36P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _hasteEffectDurationSeconds;

	UPROPERTY(EditDefaultsOnly)
	float _hasteEffectMovementSpeedIncrease;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _activationDurationSeconds;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _exhaustedEffectDurationSeconds;

	UPROPERTY(Transient, Export)
	UStatusEffect* _hasteStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hasteEffectClass;

	UPROPERTY(Transient, Export)
	UActivatableExhaustedEffect* _exhaustedStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UActivatableExhaustedEffect> _exhaustedEffectClass;

public:
	UFUNCTION(BlueprintPure)
	float GetHasteEffectMovementSpeedIncrease() const;

	UFUNCTION(BlueprintPure)
	float GetHasteEffectDurationSeconds() const;

	UFUNCTION(BlueprintPure)
	float GetExhaustedEffectDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetActivationDurationAtLevel() const;

private:
	UFUNCTION()
	void Authority_OnIsRunningAndMovingChanged(const bool isRunningAndMoving);

public:
	US36P01();
};

FORCEINLINE uint32 GetTypeHash(const US36P01) { return 0; }
