#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "SprintBurst.generated.h"

class UStatusEffect;
class UActivatableExhaustedEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class USprintBurst : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _exhaustionDuration;

	UPROPERTY(EditDefaultsOnly)
	float _sprintDuration;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exhaustedEffectClass;

	UPROPERTY(Transient, Export)
	UActivatableExhaustedEffect* _exhaustedEffect;

private:
	UFUNCTION(BlueprintPure)
	float GetSprintDuration() const;

	UFUNCTION(BlueprintPure)
	float GetExhaustedDuration() const;

	UFUNCTION()
	void Authority_OnPerkFlagsChanged(FGameplayTag gameplayTag, bool isAdded);

	UFUNCTION()
	void Authority_OnIsRunningAndMovingChanged(const bool isRunningAndMoving);

public:
	USprintBurst();
};

FORCEINLINE uint32 GetTypeHash(const USprintBurst) { return 0; }
